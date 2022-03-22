#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void oub(char s)
{
    char *s;
    
}

void main()
{
    int x=0;
    char s[20];
    flushall();
    gets (s);
    x=strlen(s);
    printf("%d",x);
    oub(s);
    printf("%s",s);
    flushall();
    gets (s);
}