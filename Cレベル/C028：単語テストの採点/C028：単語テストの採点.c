#include<stdio.h>
#include<string.h>
int main(void){
  int n = 0, point = 0;
  printf("問題数を表すNを入力：");
  scanf("%d", &n);

  char q[n], a[n];
  for(int i = 0; i < n; i++){
    scanf("%s %s", &q, &a);

    if(strlen(q) == strlen(a)){
      int matchPoint = 0;
      for(int j = 0; j != strlen(q); j++){
        if(q[j] == a[j]){
          matchPoint++;
        }
      }

      if(strlen(q) - matchPoint == 0){
        point += 2;
      }
      if(strlen(q) - matchPoint == 1){
        point++;
      }
    }else{
      //
    }
  }

  printf("%d\n", point);
  return 0;
}
