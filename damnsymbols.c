#include <stdio.h>

int main() {
  int x,y;
  char shit;
  printf("gimme two numbers and a damn symbol \n");
  scanf("%d %d %c", &x,&y,&shit);
switch (shit){
  case ("%c=+"):
  printf("%d", x+y);
  break;
  case ("%c=-"):
  printf("%d", x-y);
  break;
  default:
  printf("yo shit wrong");
  break;
}

  return 0;
}