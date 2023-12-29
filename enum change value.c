#include <stdio.h>

//create enum
enum level {
    low =25,
    medium=50,
    high =75
};

int main(){
    
//assign value to enum
enum level myVar = medium;

//print the item's value
printf("%d",myVar);

    return 0;
}
//runs: 50
//change an item's value
