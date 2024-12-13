#include<stdio.h>
int main(void){
  int a = 0, b = 0, n = 0;
  printf("親カードの1つ目の番号を入力：");
  scanf("%d", &a);
  printf("親カードの2つ目の番号を入力：");
  scanf("%d", &b);
  printf("整数Nを入力：");
  scanf("%d", &n);

  int x[n], y[n];
  for(int i = 0; i < n; i++){
    scanf("%d %d", &x[i], &y[i]);

    if(a > x[i]){
        printf("HIGH\n");
    }else{
      if (a == x[i] && b < y[i]){
          printf("HIGH\n");
      }else{
          printf("LOW\n");
      }
    }
  }
  return 0;
}
