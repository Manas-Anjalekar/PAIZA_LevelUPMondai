@ -1,33 +0,0 @@
#include<stdio.h>
#include<string.h>
int main(void){
  int n = 0, m = 0, heyaKazu = 0;
  printf("嫌いな数字を入力：");
  scanf("%d", &n);
  printf("病室の総数を入力：");
  scanf("%d", &m);

  char r[m][3];
  for(int i = 1; i <= m; i++){
    scanf("%s", &r[i]);

    int temp = 0, atari = 0;
    for(int j = 0; j < strlen(r[i]); j++){
      temp = r[i][j] - '0';
      if(temp == n){
        atari++;
      }
    }

    if(atari > 0){
      heyaKazu++;
    }else{
      printf("%s\n", r[i]);
    }
  }

  if(heyaKazu >= m){
    printf("none\n");
  }
  return 0;
}