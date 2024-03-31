#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int age=30;
    int * pAge=&age;

    printf("&age: %p \n",&age);
    printf("*pAge: %p",pAge);
    //both show the memory address of age
}
