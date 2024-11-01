#include<stdio.h>
int main(void){
  int n = 0, q = 0, add = 0;
  printf("要素数Nを入力：　");
  scanf("%d", &n);
  printf("要素数Qを入力：　");
  scanf("%d", &q);
  int a[n], b[2 * q];
  printf("数列Aを入力：　");
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  printf("配列Qを入力：　\n");
  for(int j = 0; j < q; j++){
    scanf("%d", &b[j]);
    if(b[j] == 0){
      int temp = 0;
      scanf("%d", &temp);
      a[n + add] = temp;
      add++;
    }else if(b[j] == 1){
      a[sizeof(a[0])] = 0;
    }else if(b[j] == 2){
      for(int k = 0; k <= sizeof(a[0]); k++){
        if(a[k] == 0){
          // スキップ
        }else{
          printf("%d ", a[k]);
        }
      }
      printf("\n");
    }
  }
  return 0;
}
