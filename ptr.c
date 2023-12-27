#include <stdio.h>

int main()
{
int age=22;
int* ptr=&age;
printf("i'm %p years old", ptr);

/*
runs:
i'm 0x7ffe5367e044 years old

it prints the pointer.

the number is in hexadecimal form (0x..) 
and it changes every time you run it.
*/
    return 0;
}
