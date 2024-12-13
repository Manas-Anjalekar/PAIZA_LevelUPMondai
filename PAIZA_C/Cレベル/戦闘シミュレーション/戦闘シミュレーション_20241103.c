#include<stdio.h>
int main(void){
  int n = 0, l = 0;
  printf("戦闘回数Nを入力：　");
  scanf("%d", &n);
  int x[n];
  printf("あなたのレベルを表す数値Lを入力：　");
  scanf("%d", &l);
  printf("相手側のレベルを入力：　");
  for(int i = 0; i < n; i++){
    scanf("%d", &x[i]);
    if(l > x[i]){
      l = l + (x[i] / 2);
    }else if(l < x[i]){
      l = l / 2;
    }else if(x[i] == l){
      //　飛ばす
    }
  }
  printf("戦闘後、あなたのレベルは：　%d\n", l);
  return 0;
}
