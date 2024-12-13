#include<stdio.h>
int main(void){
  int n = 0, ugoitaKaiBun = 0;
  printf("ログの行数を示す整数Nを入力：");
  scanf("%d", &n);

  int f[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &f[i]);

    if(i == 0){
      ugoitaKaiBun += f[i] - 1;
    }else{
      if(f[i] - f[i-1] >= 0){
        ugoitaKaiBun += f[i] - f[i-1];
      }else{
        ugoitaKaiBun += f[i-1] - f[i];
      }
    }
  }

  printf("%d\n", ugoitaKaiBun);
  return 0;
}
