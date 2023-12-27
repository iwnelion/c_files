#include <stdio.h>

int main()
{
int nums[4]={10,11,12,13};
int *ptr=nums;
int i;

for (i=0;i<4;i++) {
    printf("%d\n", *(ptr+1));
}
/*
runs:
10
11
12
13
we use a pointer to access the array elements 
and a loop to print them all.
*/
    return 0;
}
