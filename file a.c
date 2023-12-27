#include <stdio.h>

int main(){
FILE *fptr;
//open:
fptr=fopen("hi.txt","w");
//APPEND some new content:
fprintf(fptr,"\nnew content!");
//close:
fclose(fptr);

return 0;
}

/*
this ADDS new content below the old content.
it's for an already existing file.
*/
