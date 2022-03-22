#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
	char x[3]={'\0'};
   char y[3]={'\0'};
   flushall();
 	gets(x);
   strcpy(y,x);
   printf("%s",y);
   getch();
}