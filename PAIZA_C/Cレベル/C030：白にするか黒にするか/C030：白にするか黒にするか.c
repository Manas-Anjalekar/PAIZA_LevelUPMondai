#include<stdio.h>
int main(void){
  int h = 0, w = 0;
  printf("画像の縦のサイズを入力：");
  scanf("%d", &h);
  printf("画像の横のサイズを入力：");
  scanf("%d", &w);

  int p[h][w];
  for(int i = 1; i <= h; i++){
    for(int j = 1; j <= w; j++){
      scanf("%d", &p[i][j]);

      if(p[i][j] >= 128){
        p[i][j] = 1;
      }else if(p[i][j] <= 127){
        p[i][j] = 0;
      }

      if(j == w){
        printf("%d", p[i][j]);
      }else{
        printf("%d ", p[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}
