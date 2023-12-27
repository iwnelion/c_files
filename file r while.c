#include <stdio.h>

int main(){
FILE *fptr;

//open in read mode:
fptr=fopen("hi.txt","r");

//create a string big enough for the content of the file:
char string[100];

//add the fgets() function in a WHILE loop:
while(fgets(string,100,fptr)) {
    printf("%s",string);
}

return 0;
}

//read ALL the lines of an already existing file
