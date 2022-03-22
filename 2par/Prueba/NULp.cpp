#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int A[5];
    int x=0;
    A[0]=1;
    A[1]=2;
    A[2]=3;
    A[3]=4;
    A[4]=5;
    while (A[x]!=NULL)
    {
        printf("%d \n",A[x]);
        x++;
    }
    getch();
}