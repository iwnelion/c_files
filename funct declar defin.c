#include <stdio.h>
void fname(); //function declaration

int main() { //main
    fname(); //function call
    return 0;
}

void fname(){ //function definition
    printf("this is the execuded part of the function");
}

/*
seperation of function declaration and definition 
for better viewing of the code
*/
