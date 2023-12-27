#include <stdio.h>
void fname(int nums[4]){
    for (int i=0;i<4;i++) {
    printf("%d\n",nums[i]);
    }
}
int main() {
int nums[4]={10,11,12,13};
    fname(nums);
    return 0;
}
/*
10
11
12
13
*/
