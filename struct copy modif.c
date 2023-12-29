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
    
    //copy s1 values to s2
    s2 = s1;
    
    //change s2 values
    s2.num=20;
    s2.letter='b';
    strcpy(s2.astring, "smth else");
    
    //print values
    printf("%d, %c, %s\n", s1.num,s1.letter,s1.astring);
    printf("%d, %c, %s", s2.num,s2.letter,s2.astring);
return 0;
}

//copy a structure and then change its values
//prints the values of both

//if string ->include <string.h>
