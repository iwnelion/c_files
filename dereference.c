#include <stdio.h>

int main()
{
int age=22;
int* ptr=&age;
printf("the memory address of \"age\" is: %p\n", ptr);
printf("the value of \"age\" is: %d", *ptr);

/*
runs:
the memory address of "age" is: 0x7ffd19a610ec
the value of "age" is: 22

you can print the value of "age" by adding " * " before the ptr.
*/
    return 0;
}
