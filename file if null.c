#include <stdio.h>

int main(){
FILE *fptr;

//open in read mode:
fptr=fopen("hiii.txt","r");

//print this text if the file doesn't exist:
if(fptr == NULL) {
    printf("not able to open the file");
}
fclose(fptr);
return 0;
}

//check for null
