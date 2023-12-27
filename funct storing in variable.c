#include <stdio.h>
int fname(int x,int y){
    return x+y;
}
int main() {
    int rslt=fname(5,3);
    printf("result is: %d",rslt);
    return 0;
}
/*
result is: 8

this program stores the result in a variable ("rslt")
*/
