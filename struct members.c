#include <stdio.h>

//create a structure
struct str {
    int num;
    char letter;
};

//create a structure variable called s1
int main(){
    struct str s1;
    
    //assign values to members of s1
    s1.num=10;
    s1.letter='a';
    
    //print values
    printf("num is %d\n", s1.num);
    printf("letter is %c\n", s1.letter);
return 0;
}
