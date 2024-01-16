#include <stdio.h>

int main()
{
    int x=3,y=10;
    if (x<5 && x>1) //AND
    printf("x is less than 5 and greater than 1\n");
    
    if (y<20 || y>15) //OR
    printf("y is either less than 20 or greater than 15\n");
    
    if (! (x>y)) //NOT
    printf("x<y"); //if x>y is NOT true, then ..
    
    //logical operators
    
    return 0;
}
