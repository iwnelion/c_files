#include <stdio.h>

int main()
{
//condition ? expression_if_true : expression_if_false;
int x=5;
int y=(x>0)?100 : 200;
//x is greater than 5, so y is 100
printf("x is %d\n",x);
printf("y is %d",y);
    return 0;
}
