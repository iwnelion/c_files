#include <stdio.h>

enum level {
    low=1,
    medium,
    high
};
int main(){
enum level myVar = medium;

switch (myVar) {
    case 1:
        printf("Low level");
        break;
    case 2:
        printf("Medium level");
        break;
    case 3:
        printf("High level");
        break;
    
}
    return 0;
}
//runs: Medium level
//enum with switch
