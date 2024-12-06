#include<stdio.h>
int main(void){
  int p1 = 0, p2 = 0, p3 = 0, p4 = 0, e[4], f1 = 0, f2 = 0, junYuSho1 = 0, junYuSho2 = 0;

  printf("参加者のエントリーナンバーを表す整数P1とP2を入力：");
  scanf("%d %d", &p1, &p2);
  printf("参加者のエントリーナンバーを表す整数P3とP4を入力：");
  scanf("%d %d", &p3, &p4);

  printf("各参加者の一回戦のタイムを表す4つの整数E1, E2, E3とE4を入力：\n");
  for(int i = 1; i <= 4; i++){
    scanf("%d", &e[i]);
  }
  for(int j = 1; j <= 4; j++){
    int k = 1;
    while(k != 5){
      if(j == p1 && k == p2){
        if(e[j] < e[k]){
          junYuSho1 = j;
        }else if(e[k] < e[j]){
          junYuSho1 = k;
        }
      }
      if(j == p3 && k == p4){
        if(e[j] < e[k]){
          junYuSho2 = j;
        }else if(e[k] < e[j]){
          junYuSho2 = k;
        }
      }
      k++;
    }
  }

  printf("二回戦進出者の二回戦のタイムを表す2つの整数F1とF2を入力：\n");
  if(junYuSho1 < junYuSho2){
    scanf("%d %d", &f1, &f2);
  }else if(junYuSho2 < junYuSho1){
    scanf("%d %d", &f2, &f1);
  }

  if(f1 < f2){
      printf("%d\n%d\n", junYuSho1, junYuSho2);
  }else if(f2 < f1){
      printf("%d\n%d\n", junYuSho2, junYuSho1);
  }
  return 0;
}
