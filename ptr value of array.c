#include <stdio.h>

int main()
{
int nums[4]={10,11,12,13};
printf("%d\n", *nums);
printf("%d\n",*(nums+1));

/*
runs:
10
11
we use a pointer to access the array elements.
after the 1st, we use: *(nums+1)...*(nums+3) and so on.
*/
    return 0;
}
