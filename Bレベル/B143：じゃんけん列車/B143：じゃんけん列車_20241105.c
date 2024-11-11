#include<stdio.h>
int main(void){
  int n =0, m = 0, foundValue = 0;
  printf("園児の人数を表す整数Nを入力：　");
  scanf("%d", &n);
  printf("じゃんけんの勝敗記録の個数を表す整数Mを入力：　");
  scanf("%d", &m);
  int res[m][n-m];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < 2; j++){
      scanf("%d", &res[i][j]);
      printf("列：　\trokI[%d] rokJ[%d] %d\n", i, j, res[i][j]);
    }
  }


  for(int k = 0; k < m; k++){
    for(int l = 0; l < 2; l++){
      if(k + l != k + 1){
        int temp = 0;
        while(temp != m){
          if(res[k][l] == res[temp][1]){
            printf("同じ値を発見。locI[%d]\tloJ[%d]\t%d\tlocI[%d]\tlocJ[1]\t%d\n", k, l, res[k][l], temp, res[temp][1]);
            res[temp][2] = res[k][l+1];
            printf("追加完了。locI[%d]\tlocJ[2]\t%d\n", temp, res[temp][2]);
            temp++;
          }else{
            temp++;
          }
        }
      }
    }
  }
  //
  // for(int j = 0; j < m; j++){
  //   printf("勝ち列：　\nrok[%d] %d\n", j, kachi[j]);
  //   printf("負け列：　\nrok[%d] %d\n", j, make[j]);
  // }
  // for(int i = 0; i < m; i++){
  //   for(int j = 0; j < n-m; j++){
  //     if(res[i][1] == res[j][0]){
  //       printf("%d\n", res[i][0]);
  //       foundValue++;
  //     }
  //   }
  // }
  //
  // if(foundValue == 0){
  //   for(int k = 0; k < m; k++){
  //     printf("%d\n", res[k][0]);
  //   }
  // }
  return 0;
}
