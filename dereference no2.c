#include <stdio.h>

int main()
{
    int a=1;
    int * poi = &a;

    printf("the value of a is %d \n",a);
    printf("the value of a is %d (from dereference of pointer)",*poi);
//both print the value of a (1)
    return 0;
}
