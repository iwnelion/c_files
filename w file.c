#include <stdio.h>

int main(){
FILE *fptr;
//open:
fptr=fopen("hi.txt","w");
//write:
fprintf(fptr,"text!");
//close:
fclose(fptr);
//write in a file
return 0;
}
