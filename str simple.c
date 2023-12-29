#include <stdio.h>

//create a structure
struct str {
    int num;
    char letter;
    char astring[30]; //it's a string in a structure
};

int main(){
    //create a structure variable and assign values to it
    struct str s1 = {10,'a',"string text"};
    
    //print values
    printf("%d, %c, %s", s1.num,s1.letter,s1.astring);
return 0;
}

//with this method you don't need to use the strcpy() function!!
