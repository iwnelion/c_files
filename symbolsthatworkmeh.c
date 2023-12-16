#include <stdio.h>

int main() {
  int x,y;
  char shit;
  printf("gimme two numbers and a damn symbol \n");
  scanf("%d %d %c", &x,&y,&shit);
printf("%d %c %d = %d",x,shit,y,x+y);

  return 0;
}