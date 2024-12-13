#include <stdio.h>

int main(void){
  int n = 0, m = 0;
  printf("大会の参加者の総数を表す整数Nを入力：");
  scanf("%d", &n);
  m = n * (n-1) / 2;

  int f[m], s[m];
  for(int i = 1; i <= m; i++){
    scanf("%d %d", &f[i], &s[i]);
  }

  char shiaiKekka[m][n];
  for(int j = 1; j <= m; j++){
    for(int k = 1; k <= n; k++){
      if(j == k){
        shiaiKekka[j][k] = '-';
      }else{
        int l = 1;
        while(l <= m){
          if(j == f[l]){
            shiaiKekka[j][k] = 'W';
            shiaiKekka[k][j] = 'L';
          }
          l++;
        }
      }
    }
  }

  for(int o = 1; o <= m; o++){
    for(int p = 1; p <= n; p++){
      if(p == n){
            printf("%c", shiaiKekka[o][p]);
        }else{
            printf("%c ", shiaiKekka[o][p]);
        }
    }
    printf("\n");
  }
  return 0;
}
