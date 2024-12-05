#include<stdio.h>
int main(void){
  int m = 0, n = 0, retsuValue = 0;
  printf("連休の日数を表す整数Mを入力：");
  scanf("%d", &m);
  printf("旅行の日数を表す整数Nを入力：");
  scanf("%d", &n);
  retsuValue = (m - n) + 1;

  int d[m], r[m], heikinValue[retsuValue], heikinValueAscending[retsuValue];
  for(int i = 0; i < m; i++){
    scanf("%d %d", &d[i], &r[i]);
  }

  for(int j = 0; j < m; j++){
    int totalValue = 0;
    for(int k = 0; k < n; k++){
      totalValue += r[j+k];
    }
    heikinValue[j] = totalValue / n;

    heikinValueAscending[j] = heikinValue[j];
  }

  int l = 0;
  while(l != m*n){
    int o = 0;
    while(o + 1 != retsuValue){
      int temp = 0;
      if(heikinValueAscending[o] >= heikinValueAscending[o+1]){
        temp = heikinValueAscending[o+1];
        heikinValueAscending[o+1] = heikinValueAscending[o];
        heikinValueAscending[o] = temp;
      }
      o++;
    }
    l++;
  }

  for(int p = 0; p < retsuValue; p++){
    if(heikinValueAscending[0] == heikinValue[p]){
      printf("%d %d\n", d[p], d[p+2]);
    }
  }
  return 0;
}
