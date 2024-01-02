#include <stdio.h>

int main()
{
int i;
int array[10]={1,2,3,4,5,6,7,8,9,10};
int sum;
for (i = 0; i < 10; i++) {
    sum += array[i];
}
printf("the sum of the array is %d",sum);
    return 0;
}
//runs: 55
