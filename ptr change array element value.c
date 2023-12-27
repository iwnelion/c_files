#include <stdio.h>

int main()
{
int nums[4]={10,11,12,13};
*nums=20;
*(nums+1)=21;
printf("the new value of the first element of the array: %d\n",*nums);
printf("the new value of the 2nd element is: %d", *(nums+1));
/*
runs:
20
21

changed the value of array elements
*/
    return 0;
}
