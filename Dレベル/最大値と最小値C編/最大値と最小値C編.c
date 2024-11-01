#include<stdio.h>
int main(void){
  int a = 0, b = 0, c = 0,largest_number = 0,smallest_number = 0;
  printf("自然数A B Cを入力：　");
  scanf("%d %d %d", &a, &b, &c);
  // 最大値を計算
  if(b >= a){
    if (b > c){
      largest_number = b;
    }else{
      if(c >= a){
        largest_number = c;
      }else{
        largest_number = a;
      }
    }
  }else if(a >= b){
    if (a > c){
      largest_number = a;
    }else{
      if(c >= b){
        largest_number = c;
      }else{
        largest_number = b;
      }
    }
  }
  // 最小値を計算
  if(b <= a){
    if (b < c){
      smallest_number = b;
    }else{
      if(c <= a){
        smallest_number = c;
      }else{
        smallest_number = a;
      }
    }
  }else if(a <= b){
    if (a < c){
      smallest_number = a;
    }else{
      if(c <= b){
        smallest_number = c;
      }else{
        smallest_number = b;
      }
    }
  }
  printf("最大値ー最小値は：%d\n", (largest_number - smallest_number));
  return 0;
}
