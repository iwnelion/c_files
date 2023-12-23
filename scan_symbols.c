#include <stdio.h>

int main() {
int x,y,sum;
char shit;
printf("gimme two numbers and a symbol \n");
scanf("%d %d %c",&x,&y,&s);
switch (s){
  case '+':
    {
    sum=x+y;
  printf("your result is %d", sum);
  break;
    }
  case '-':
    {
    sum=x-y;
  printf("your result is %d", sum);
  break;
    }
  case '*':
    {
    sum=x*y;
  printf("your result is %d", sum);
  break;
    }
  case '/':
    {
    sum=x/y;
  printf("your result is %d", sum);
  break;
    }
  default:
    {
  printf("wrong symbol");
    }  
}
    return 0;
  }
