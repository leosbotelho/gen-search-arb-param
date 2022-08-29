[Polly](https://polly.llvm.org/) might also lend a hand:
```
Polly=-mllvm -polly -mllvm -polly-parallel \
      -mllvm -polly-omp-backend=LLVM -mllvm -polly-vectorizer=stripmine
Opt=-O2 $(Polly)
```
