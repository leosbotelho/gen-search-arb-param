#include "search-param-5.h"
#include "../type.h"
#include "../env/a.h"
#include "../arb-param.h"

void searchParam5( Env* env,
                  int univ3PairRangeArr[][3],
                  int univ2PairRangeArr[][3]){
  int univ3PairRange00 = 0;
  int univ3PairRange0Count = 0;
  int univ3PairRange0Dir = 0;
  if (univ3PairRangeArr[0][0] != -1) {
    univ3PairRange00 = univ3PairRangeArr[0][0];
    univ3PairRange0Count = univ3PairRangeArr[0][1] - univ3PairRange00 + 1;
    univ3PairRange0Dir = univ3PairRangeArr[0][2];
  }

  int univ3PairRange10 = 0;
  int univ3PairRange1Count = 0;
  int univ3PairRange1Dir = 0;
  if (univ3PairRangeArr[1][0] != -1) {
    univ3PairRange10 = univ3PairRangeArr[1][0];
    univ3PairRange1Count = univ3PairRangeArr[1][1] - univ3PairRange10 + 1;
    univ3PairRange1Dir = univ3PairRangeArr[1][2];
  }

  int univ3PairRange20 = 0;
  int univ3PairRange2Count = 0;
  int univ3PairRange2Dir = 0;
  if (univ3PairRangeArr[2][0] != -1) {
    univ3PairRange20 = univ3PairRangeArr[2][0];
    univ3PairRange2Count = univ3PairRangeArr[2][1] - univ3PairRange20 + 1;
    univ3PairRange2Dir = univ3PairRangeArr[2][2];
  }

  int univ3PairRange30 = 0;
  int univ3PairRange3Count = 0;
  int univ3PairRange3Dir = 0;
  if (univ3PairRangeArr[3][0] != -1) {
    univ3PairRange30 = univ3PairRangeArr[3][0];
    univ3PairRange3Count = univ3PairRangeArr[3][1] - univ3PairRange30 + 1;
    univ3PairRange3Dir = univ3PairRangeArr[3][2];
  }

  int univ3PairRange40 = 0;
  int univ3PairRange4Count = 0;
  int univ3PairRange4Dir = 0;
  if (univ3PairRangeArr[4][0] != -1) {
    univ3PairRange40 = univ3PairRangeArr[4][0];
    univ3PairRange4Count = univ3PairRangeArr[4][1] - univ3PairRange40 + 1;
    univ3PairRange4Dir = univ3PairRangeArr[4][2];
  }

  int univ2PairRange00 = 0;
  int univ2PairRange0Count = 0;
  int univ2PairRange0Dir = 0;
  if (univ2PairRangeArr[0][0] != -1) {
    univ2PairRange00 = univ2PairRangeArr[0][0];
    univ2PairRange0Count = univ2PairRangeArr[0][1] - univ2PairRange00 + 1;
    univ2PairRange0Dir = univ2PairRangeArr[0][2];
  }

  int univ2PairRange10 = 0;
  int univ2PairRange1Count = 0;
  int univ2PairRange1Dir = 0;
  if (univ2PairRangeArr[1][0] != -1) {
    univ2PairRange10 = univ2PairRangeArr[1][0];
    univ2PairRange1Count = univ2PairRangeArr[1][1] - univ2PairRange10 + 1;
    univ2PairRange1Dir = univ2PairRangeArr[1][2];
  }

  int univ2PairRange20 = 0;
  int univ2PairRange2Count = 0;
  int univ2PairRange2Dir = 0;
  if (univ2PairRangeArr[2][0] != -1) {
    univ2PairRange20 = univ2PairRangeArr[2][0];
    univ2PairRange2Count = univ2PairRangeArr[2][1] - univ2PairRange20 + 1;
    univ2PairRange2Dir = univ2PairRangeArr[2][2];
  }

  int univ2PairRange30 = 0;
  int univ2PairRange3Count = 0;
  int univ2PairRange3Dir = 0;
  if (univ2PairRangeArr[3][0] != -1) {
    univ2PairRange30 = univ2PairRangeArr[3][0];
    univ2PairRange3Count = univ2PairRangeArr[3][1] - univ2PairRange30 + 1;
    univ2PairRange3Dir = univ2PairRangeArr[3][2];
  }

  int univ2PairRange40 = 0;
  int univ2PairRange4Count = 0;
  int univ2PairRange4Dir = 0;
  if (univ2PairRangeArr[4][0] != -1) {
    univ2PairRange40 = univ2PairRangeArr[4][0];
    univ2PairRange4Count = univ2PairRangeArr[4][1] - univ2PairRange40 + 1;
    univ2PairRange4Dir = univ2PairRangeArr[4][2];
  }

  // univ3
  for (int it0 = 0;it0 < univ3PairRange0Count;it0++) {
    DexProto d0 = Univ3;
    int k0 = univ3PairRange00 + it0;
    int dir0 = univ3PairRange0Dir;
    // univ3
    for (int it1 = 0;it1 < univ3PairRange1Count;it1++) {
      DexProto d1 = Univ3;
      int k1 = univ3PairRange10 + it1;
      int dir1 = univ3PairRange1Dir;
      // univ3
      for (int it2 = 0;it2 < univ3PairRange2Count;it2++) {
        DexProto d2 = Univ3;
        int k2 = univ3PairRange20 + it2;
        int dir2 = univ3PairRange2Dir;
        // univ3
        for (int it3 = 0;it3 < univ3PairRange3Count;it3++) {
          DexProto d3 = Univ3;
          int k3 = univ3PairRange30 + it3;
          int dir3 = univ3PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
        // univ2
        for (int it3 = 0;it3 < univ2PairRange3Count;it3++) {
          DexProto d3 = Univ2;
          int k3 = univ2PairRange30 + it3;
          int dir3 = univ2PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
      }
      // univ2
      for (int it2 = 0;it2 < univ2PairRange2Count;it2++) {
        DexProto d2 = Univ2;
        int k2 = univ2PairRange20 + it2;
        int dir2 = univ2PairRange2Dir;
        // univ3
        for (int it3 = 0;it3 < univ3PairRange3Count;it3++) {
          DexProto d3 = Univ3;
          int k3 = univ3PairRange30 + it3;
          int dir3 = univ3PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
        // univ2
        for (int it3 = 0;it3 < univ2PairRange3Count;it3++) {
          DexProto d3 = Univ2;
          int k3 = univ2PairRange30 + it3;
          int dir3 = univ2PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
      }
    }
    // univ2
    for (int it1 = 0;it1 < univ2PairRange1Count;it1++) {
      DexProto d1 = Univ2;
      int k1 = univ2PairRange10 + it1;
      int dir1 = univ2PairRange1Dir;
      // univ3
      for (int it2 = 0;it2 < univ3PairRange2Count;it2++) {
        DexProto d2 = Univ3;
        int k2 = univ3PairRange20 + it2;
        int dir2 = univ3PairRange2Dir;
        // univ3
        for (int it3 = 0;it3 < univ3PairRange3Count;it3++) {
          DexProto d3 = Univ3;
          int k3 = univ3PairRange30 + it3;
          int dir3 = univ3PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
        // univ2
        for (int it3 = 0;it3 < univ2PairRange3Count;it3++) {
          DexProto d3 = Univ2;
          int k3 = univ2PairRange30 + it3;
          int dir3 = univ2PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
      }
      // univ2
      for (int it2 = 0;it2 < univ2PairRange2Count;it2++) {
        DexProto d2 = Univ2;
        int k2 = univ2PairRange20 + it2;
        int dir2 = univ2PairRange2Dir;
        // univ3
        for (int it3 = 0;it3 < univ3PairRange3Count;it3++) {
          DexProto d3 = Univ3;
          int k3 = univ3PairRange30 + it3;
          int dir3 = univ3PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
        // univ2
        for (int it3 = 0;it3 < univ2PairRange3Count;it3++) {
          DexProto d3 = Univ2;
          int k3 = univ2PairRange30 + it3;
          int dir3 = univ2PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
      }
    }
  }
  // univ2
  for (int it0 = 0;it0 < univ2PairRange0Count;it0++) {
    DexProto d0 = Univ2;
    int k0 = univ2PairRange00 + it0;
    int dir0 = univ2PairRange0Dir;
    // univ3
    for (int it1 = 0;it1 < univ3PairRange1Count;it1++) {
      DexProto d1 = Univ3;
      int k1 = univ3PairRange10 + it1;
      int dir1 = univ3PairRange1Dir;
      // univ3
      for (int it2 = 0;it2 < univ3PairRange2Count;it2++) {
        DexProto d2 = Univ3;
        int k2 = univ3PairRange20 + it2;
        int dir2 = univ3PairRange2Dir;
        // univ3
        for (int it3 = 0;it3 < univ3PairRange3Count;it3++) {
          DexProto d3 = Univ3;
          int k3 = univ3PairRange30 + it3;
          int dir3 = univ3PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
        // univ2
        for (int it3 = 0;it3 < univ2PairRange3Count;it3++) {
          DexProto d3 = Univ2;
          int k3 = univ2PairRange30 + it3;
          int dir3 = univ2PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
      }
      // univ2
      for (int it2 = 0;it2 < univ2PairRange2Count;it2++) {
        DexProto d2 = Univ2;
        int k2 = univ2PairRange20 + it2;
        int dir2 = univ2PairRange2Dir;
        // univ3
        for (int it3 = 0;it3 < univ3PairRange3Count;it3++) {
          DexProto d3 = Univ3;
          int k3 = univ3PairRange30 + it3;
          int dir3 = univ3PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
        // univ2
        for (int it3 = 0;it3 < univ2PairRange3Count;it3++) {
          DexProto d3 = Univ2;
          int k3 = univ2PairRange30 + it3;
          int dir3 = univ2PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
      }
    }
    // univ2
    for (int it1 = 0;it1 < univ2PairRange1Count;it1++) {
      DexProto d1 = Univ2;
      int k1 = univ2PairRange10 + it1;
      int dir1 = univ2PairRange1Dir;
      // univ3
      for (int it2 = 0;it2 < univ3PairRange2Count;it2++) {
        DexProto d2 = Univ3;
        int k2 = univ3PairRange20 + it2;
        int dir2 = univ3PairRange2Dir;
        // univ3
        for (int it3 = 0;it3 < univ3PairRange3Count;it3++) {
          DexProto d3 = Univ3;
          int k3 = univ3PairRange30 + it3;
          int dir3 = univ3PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
        // univ2
        for (int it3 = 0;it3 < univ2PairRange3Count;it3++) {
          DexProto d3 = Univ2;
          int k3 = univ2PairRange30 + it3;
          int dir3 = univ2PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
      }
      // univ2
      for (int it2 = 0;it2 < univ2PairRange2Count;it2++) {
        DexProto d2 = Univ2;
        int k2 = univ2PairRange20 + it2;
        int dir2 = univ2PairRange2Dir;
        // univ3
        for (int it3 = 0;it3 < univ3PairRange3Count;it3++) {
          DexProto d3 = Univ3;
          int k3 = univ3PairRange30 + it3;
          int dir3 = univ3PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
        // univ2
        for (int it3 = 0;it3 < univ2PairRange3Count;it3++) {
          DexProto d3 = Univ2;
          int k3 = univ2PairRange30 + it3;
          int dir3 = univ2PairRange3Dir;
          // univ3
          for (int it4 = 0;it4 < univ3PairRange4Count;it4++) {
            DexProto d4 = Univ3;
            int k4 = univ3PairRange40 + it4;
            int dir4 = univ3PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
          // univ2
          for (int it4 = 0;it4 < univ2PairRange4Count;it4++) {
            DexProto d4 = Univ2;
            int k4 = univ2PairRange40 + it4;
            int dir4 = univ2PairRange4Dir;
            estParam(env, 5, d0, k0, dir0, d1, k1, dir1, d2, k2, dir2, d3, k3, dir3, d4, k4, dir4);
          }
        }
      }
    }
  }
}
