#include <stdio.h>
int fname(int,int); //function declaration

int main() { //main
    int rslt=fname(5,3); //function call
    printf("result is %d",rslt);
    return 0;
}
int fname(int x,int y){ //function definition
return x+y;
}

/*
runs: result is 8

seperation of function declaration and definition 
for better viewing of the code
*/
