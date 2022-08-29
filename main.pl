use strict;
use Pre::Candy qw(writeFile);
use Fmt qw(shr);

use constant N => 5;

my $DexProto_ = ['univ3', 'univ2'];

die "invalid env\n" unless defined $ENV{BB_DirpathAbs};

my $path = "$ENV{BB_DirpathAbs}/strat/gen";

sub genPairRange {
  my ($dexProto, $i) = @_;

  my $p = "${dexProto}PairRange";
  my $v = "$p${i}";

"int ${v}0 = 0;
int ${v}Count = 0;
int ${v}Dir = 0;
if (${p}Arr[$i][0] != -1) {
  ${v}0 = ${p}Arr[$i][0];
  ${v}Count = ${p}Arr[$i][1] - ${v}0 + 1;
  ${v}Dir = ${p}Arr[$i][2];
}"
}

sub genLoop_ {
  my ($dexProto, $i) = @_;

  my $dexProto_ = ucfirst $dexProto;
  my $p = "${dexProto}PairRange";
  my $it = "it$i";

  sub {
    my $body_ = Fmt::shr 2, $_[0];

"// $dexProto
for (int $it = 0;$it < ${p}${i}Count;$it++) {
  DexProto d$i = $dexProto_;
  int k$i = ${p}${i}0 + $it;
  int dir$i = ${p}${i}Dir;
$body_
}"
  }
}

sub genLoop {
  my $i = shift;
  my @genLoop = map { genLoop_ $_, $i } (@$DexProto_);
  sub {
    my $body = shift;
    join "\n", map { $_->($body) } (@genLoop);
  }
}

sub genBody {
  my $n = shift;
  my $arg = join ', ', map { "d$_, k$_, dir$_" } (0..$n - 1);
  "estParam(env, $n, $arg);"
}

sub genSearchParam {
  my $n = shift;

  my $pairRange = '';
  for my $dexProto (@$DexProto_) {
    $pairRange .= genPairRange ($dexProto, $_) . "\n\n" for (0 .. $n - 1);
  }

  my $loop = do {
    my $genLoop0 = genLoop 0;
    my @genLoop = map { genLoop $_ } (1 .. $n - 1);
    my $s = genBody $n;
    $s = $genLoop[$_]->($s) for reverse (0..$#genLoop);
    $genLoop0->($s);
  };

  "$pairRange$loop"
}

sub searchParamFn_ {
  my ($i, $isForwardDecl) = @_;
  my $struct = $isForwardDecl ? ' struct' : '';
"void searchParam$i($struct Env* env,
                  int univ3PairRangeArr[][3],
                  int univ2PairRangeArr[][3])"
}

sub genSearchParamFnForwardDecl {
  "extern\n" . searchParamFn_ ($_[0], 1) . ";" }

sub genSearchParamFn {
  my $i = shift;
  my $body = Fmt::shr 2 , genSearchParam ($i);
searchParamFn_ ($i) . "{
$body
}
"
}

sub genH_ {
  my $i = shift;
  my $body = genSearchParamFnForwardDecl $i;
"#ifndef My_SearchParam${i}_Hdr
#define My_SearchParam${i}_Hdr

struct Env;

$body

#endif
"
}

sub genC {
  my $i = shift;
  my $inc = sub { "#include \"$_[0]\"\n" };
  $inc->("search-param-$i.h") .
  $inc->('../type.h') .
  $inc->('../env/a.h') .
  $inc->('../arb-param.h') . "\n" .
  genSearchParamFn ($i);
}

sub genH {
  my $n = shift;
  my $body = join "\n", map { "#include \"search-param-$_.h\"" } (2..$n);
"#ifndef My_SearchParam_Hdr
#define My_SearchParam_Hdr

$body

#endif
"
}

for (2..N) {
  writeFile "$path/search-param-$_.h", genH_ ($_);
  writeFile "$path/search-param-$_.c", genC ($_);
}
writeFile "$path/search-param.h", genH (N);
