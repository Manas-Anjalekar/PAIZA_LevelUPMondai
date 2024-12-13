#include<stdio.h>
int main(void){
  int n = 0, k = 0, bingoKazu = 0;
  printf("ビンゴカードの縦横の大きさを表す整数Nを入力：　");
  scanf("%d", &n);
  printf("抽選回数を表す整数Kを入力：　");
  scanf("%d", &k);
  int bingoTable[n][n], chusenTable[k];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        scanf("%d", &bingoTable[i][j]);
    }
  }
  printf("\n\n");
  for(int l = 0; l < k; l++){
    scanf("%d", &chusenTable[l]);
  }

  for(int m = 0; m < n; m++){
    for(int o = 0; o < n; o++){
      for(int p = 0; p < k; p++){
        if(bingoTable[m][o] == chusenTable[p]){
          bingoTable[m][o] = -1;
        }
      }
    }
  }
  for(int q = 0; q < n; q++){
    for(int r = 0; r < n; r++){
      if(bingoTable[q][r] == -1 && bingoTable[q][r+1] == 0 && bingoTable[q][r+2] == -1 || bingoTable[q][r] == -1 && bingoTable[q][r+1] == -1 && bingoTable[q][r+2] == -1){
        if(r < n && r+1 <n && r+2 < n){
          bingoKazu++;
        }
      }if(bingoTable[q][r] == -1 && bingoTable[q+1][r] == 0 && bingoTable[q+2][r] == -1 || bingoTable[q][r] == -1 && bingoTable[q+1][r] == -1 && bingoTable[q+2][r] == -1){
        if(q < n && q+1 <n && q+2 < n){
          bingoKazu++;
        }
      }if(bingoTable[q][r] == -1 && bingoTable[q+1][r+1] == 0 && bingoTable[q+2][r+2] == -1){
        if(q < n && r < n && q+1 <n && r+1 <n && q+2 < n && r+2 < n){
          bingoKazu++;
        }
      }if(bingoTable[q][r] == -1 && bingoTable[q-1][r+1] == 0 && bingoTable[q-2][r+2] == -1){
        if(q < n && r < n && q-1 <n && r+1 <n && q-2 < n && r+2 < n){
          bingoKazu++;
        }
      }
    }
  }

  printf("\nK回の抽選の後のビンゴの数：　%d\n", bingoKazu);
  return 0;
}
