#include <stdio.h>

//create a structure
struct str {
    int num;
    char letter;
};

//create diffirent struct variables
int main(){
    struct str s1;
    struct str s2;
    
    //assign values to members of s1
    s1.num=10;
    s1.letter='a';
    
    //assign values to members of s2
    s2.num=20;
    
    //print values
    printf("num is %d\n", s1.num);
    printf("letter is %c\n", s1.letter);
    printf("num of str2 is %d\n", s2.num);
return 0;
}
