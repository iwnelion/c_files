#include <stdio.h>

//create a structure
struct str {
    int num;
    char letter;
    char astring[30];
};

int main(){
    //create a structure variable and assign values to it
    struct str s1 = {10,'a',"string text"};
    
    //create another structure variable
    struct str s2;
    
    //COPY s1 values to s2
    s2 = s1
    
    //print values
    printf("%d, %c, %s", s2.num,s2.letter,s2.astring);
return 0;
}

//copy a structure
