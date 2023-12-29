#include <stdio.h>
#include <string.h>

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
    
    //modify values
    s1.num=20;
    s1.letter='b';
    strcpy(s1.astring,"smth else");
    
    //print values
    printf("%d, %c, %s", s1.num,s1.letter,s1.astring);
return 0;
}

//modify a structure
//if string ->include <string.h>
