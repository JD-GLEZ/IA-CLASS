#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Base_Conocimiento{       /////////////////////////////////////////////////////////
        char R[40];     //Regla
        int Num;        //Numero de veces que se llama la Regla, Num<5
}Base;

void gato(Base *Y,Base O[25])
{   
    //Base *Y = &P;
    flushall();
    scanf("%s\n",(*Y).R);
}

void main()
{
    Base O[25];
    Base *X = &O[25];
    int l;
    (*X).Num=25;
    printf("%d\n",(*X).Num);
    gato(X,O);//////////
    flushall();
    scanf("%s\n",O[15].R);///////////
    printf("%s\n",O[15].R);
    l = strlen ((*X).R);
    printf("%d\n",l);
    l = strlen (O[15].R);
    printf("%d\n",l);
    flushall();
    gets(O[0].R);
}