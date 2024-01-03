#include <stdio.h>

int main()
{
char vowels[] = {'A','E','I','O','U'};
char *pvowels = vowels;
int i;

for (i=0;i<5;i++) {
    printf("&vowels[%d]: %p, pvowels = %d: %p, vowels + %d: %p \n", i,&vowels[i], i,pvowels + i, i, vowels + i);
}
for (i=0;i<5;i++) {
    printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels +%d): %c\n", i, vowels[i],i, *(pvowels + i),i, *(vowels + i));
}
//&vowels[i] gives the memory location of the i"th" element of the array vowels.

    return 0;
}
