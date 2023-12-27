#include <stdio.h>

int main()
{
int nums[4]={10,11,12,13};
int i;

for (i=0;i<4;i++) {
    printf("%p\n",&nums[i]);
}

/*
runs:
the memory address of the numbers in the array.
*/
    return 0;
}
