#include <stdio.h>

//create a structure
struct str {
    int num;
    char letter;
    char astring[30]; //it's a string in a structure
};

int main(){
    struct str s1;

    //assign value to the string using the strcpy function
    strcpy(s1.astring,"string text");
    
    
    //print value
    printf("%s\n", s1.astring);
return 0;
}
