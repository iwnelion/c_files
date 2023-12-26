#include <stdio.h>
#include <string.h>
int main()
{
char str1[]="hello world";
char str2[]="hello world";
char str3[]="hi world";

printf("%d\n", strcmp(str1, str2));
printf("%d\n", strcmp(str1, str3));

/*
0
-4
*/
    return 0;
}
