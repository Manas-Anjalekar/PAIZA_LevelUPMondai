#include<stdio.h>
int main(void){
  int n = 0, q = 0;
  printf("要素数Nを入力： ");
  scanf("%d", &n);
  int a[n];
  printf("数列Aを入力： ");
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  printf("要素数Qを入力： ");
  scanf("%d", &q);
  int b[q];
  printf("数列Bを入力： ");
  for(int j = 0; j < q; j++){
    scanf("%d", &b[j]);
  }
  printf("複数回のランダムアクセスの結果は。。。\n");
  for(int k = 1; k <= q; k++){
    printf("%d\n", a[b[k-1]-1]);
  }
  return 0;
}
