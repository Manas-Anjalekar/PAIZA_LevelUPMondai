#include<stdio.h>
int main(void){
  int a = 0, b = 0, r = 0, n = 0;
  printf("工事現場のX座標を入力：");
  scanf("%d", &a);
  printf("工事現場のY座標を入力：");
  scanf("%d", &b);
  printf("工事現場の騷音の大きさを入力：");
  scanf("%d", &r);
  printf("木陰の数を入力：");
  scanf("%d", &n);

  int x[n][2];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 2; j++){
      scanf("%d", &x[i][j]);
    }

    int xA = 0, yB = 0, x2A = 0, y2B = 0;
    xA = x[i][0] - a;
    yB = x[i][1] - b;
    x2A = xA*xA;
    y2B = yB*yB;

    if(x2A + y2B >= r*r){
      printf("silent\n");
    }else if(x2A + y2B < r*r){
      printf("noisy\n");
    }
  }
  return 0;
}
