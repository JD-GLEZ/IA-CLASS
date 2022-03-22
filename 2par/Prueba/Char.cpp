#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


void main()
{
    int x[10]={0};
    x[0]=24;
    x[3]=4;
    x[7]=244;
    //char X[10];
    //y[0]
    //X[0]=x;
    //X[3]=x;
    //X[7]=x;
    //itoa(x, X, 10);
    printf("%d \n",x);
    printf("%d \n",x[0]);
    printf("%d \n",x[3]);
    printf("%d \n",x[7]);
    printf("Adios");
    getch();
}