#include <stdio.h>

int main()
{
int i,j;
int nums[2][3] = { {10,11,12},{20,21,22} };
for (i=0; i<2; i++) {
    for (j=0; j<3; j++){
  printf("%d\n",nums[i][j]);
    }
}
/*
runs:
10
11
12
20
21
22
*/
    return 0;
}
