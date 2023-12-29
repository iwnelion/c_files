#include <stdio.h>

//create enum
enum level {
    low,
    medium,
    high
};

int main(){
    
//assign value to enum
enum level myVar = medium;

//print the item's value
printf("%d",myVar);

    return 0;
}
//runs: 1
