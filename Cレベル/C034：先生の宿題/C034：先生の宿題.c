#include<stdio.h>
#include<stdlib.h>
int main(void){
  char a, b, c, op, equal;

  printf("問題を出してください：");
  scanf("%c %c %c %c %c", &a, &op, &b, &equal, &c);

  if(a == 'x'){
    if(op == '+'){
      printf("%d\n", (c - '0') - (b - '0'));
    }else if(op == '-'){
      printf("%d\n", (b - '0') + (c - '0'));
    }
  }else if(b == 'x'){
    if(op == '+'){
      printf("%d\n", (c - '0') - (a - '0'));
    }else if(op == '-'){
      printf("%d\n", (a - '0') - (c - '0'));
    }
  }else if(c == 'x'){
    if(op == '+'){
      printf("%d\n", (a - '0') + (b - '0'));
    }else if(op == '-'){
      printf("%d\n", (a - '0') - (b - '0'));
    }
  }
  return 0;
}
