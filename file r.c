#include <stdio.h>

int main(){
FILE *fptr;

//open in read mode:
fptr=fopen("hi.txt","r");

//create a string big enough for the content of the file:
char string[100];

//add the fgets() function:
fgets(string,100,fptr);

return 0;
}

/* read an already existing file.
fgets() function reads only the first line of the file.
to read every line, add a while loop.*/
