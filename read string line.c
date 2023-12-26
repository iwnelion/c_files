#include <stdio.h>
#include <string.h>
int main()
{
char fullname[30];
printf("enter your full name: \n");
fgets(fullname, sizeof(fullname), stdin);
printf("hello %s",fullname);

/*
enter your full name:
(name)
hello (full name)
*/
    return 0;
}
