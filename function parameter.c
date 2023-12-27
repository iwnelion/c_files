#include <stdio.h>
void namefunction(char name[]){
    printf("hello %s\n",name); \\name is a parameter
}
int main()
{
    namefunction("Jo"); \\Jo is an argument
    return 0;
}
//hello Jo
