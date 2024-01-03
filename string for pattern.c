#include <stdio.h>
#include <string.h>

int main()
{
char str[]="hello world";
int i,j,len;
len=strlen(str);

for(i=0;i<len;i++) //rows
{
    for (j=0;j<=i;j++) //columns
    {
    printf("%c",str[j]);
    }
    printf("\n");
}
    return 0;
}
/*
h
he
hel
hell
hello
hello 
hello w
hello wo
hello wor
hello worl
hello world  */
