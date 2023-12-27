#include <stdio.h>

int main()
{
int nums[4]={10,11,12,13};
printf("%p\n",nums);
printf("%p\n",&nums[0]);

/*
runs:
the memory address of the nums array
and the memory address of the first array element.
*/
    return 0;
}
