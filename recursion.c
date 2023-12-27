#include <stdio.h>
int sum(int k); 

int main() { 
    int rslt=sum(10); 
    printf("%d",rslt);
    return 0;
}
int sum(int k){
    if (k>0){
        return k + sum(k-1);
    }else{
return 0;
    }
}

/*
runs: 55

when running, the program follows these steps: 
10 + sum(9)
10 + ( 9 + sum(8) )
10 + ( 9 + ( 8 + sum(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
*/
