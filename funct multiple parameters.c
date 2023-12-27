#include <stdio.h>
void namefunction(char name[],int age){
    printf("hello %s. you're %d yo\n",name,age);
}
int main()
{
    namefunction("Jo",22);
    return 0;
}
//hello Jo. you're 22 yo
