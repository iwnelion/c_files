#include <stdio.h>

int main()
{
    int a=1;
    int * poi = &a;

    printf("the value of a is %d \n",a);
    printf("the value of a is %d (from dereferrence of pointer)",*poi);
//both print 1
    return 0;
}
