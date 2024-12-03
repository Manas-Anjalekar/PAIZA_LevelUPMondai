#include<stdio.h>
int main(void){
  int n = 0, r = 0;
  printf("箱の数を表す整数N入力：");
  scanf("%d", &n);
  printf("ボールの半径を表す整数Rを入力：");
  scanf("%d", &r);

  int h[n], w[n], d[n];
  for(int i = 1; i <= n; i++){
    scanf("%d %d %d", &h[i], &w[i], &d[i]);

    if(h[i] <= w[i]){
      if(h[i] <= d[i]){
        if(r*2 <= h[i]){
          printf("%d\n", i);
        }
      }
    }
    if(w[i] <= h[i]){
      if(w[i] <= d[i]){
        if(r*2 <= w[i]){
          printf("%d\n", i);
        }
      }
    }
    if(d[i] <= h[i]){
      if(d[i] <= w[i]){
        if(r*2 <= d[i]){
          printf("%d\n", i);
        }
      }
    }
  }
  return 0;
}
