#include <stdio.h>

int main(){
FILE *fptr;
//open:
fptr=fopen("hi.txt","w");
//write:
fprintf(fptr,"text!");
//close:
fclose(fptr);

return 0;
}
