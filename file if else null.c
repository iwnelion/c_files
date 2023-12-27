#include <stdio.h>

int main(){
FILE *fptr;

//open in read mode:
fptr=fopen("hi.txt","r");

//store content:
char string[100];

//if the file exists:
if(fptr != NULL) {

    //read and print content:
    while(fgets(string,100,fptr)) {
        printf("%s",string);
    }
//if the file does not exist:
} else {
    printf("not able to open the file");
}

//close:
fclose(fptr);
return 0;
}
