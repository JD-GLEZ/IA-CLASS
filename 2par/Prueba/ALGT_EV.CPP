//Josemaria Delgado Gonzalez
//Algoritmo de evaluzion


#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
//int meter (int pila[40],int dato,int cima);
//int sacar (int pila[40],int cima);
int meter (int pila[40],int dato,int cima)
{
   if(cima!=40-1)
         {
           cima=cima+1;
           pila[cima]=dato;
         }
        return(cima);
}
int sacar (int pila[40],int cima)
{
        int x;
          if(cima!=-1)
          {
             x=pila[cima];
             pila[cima]=0;
          }

          return(x);
}

void main()
{
 int x=0,a,b,c,valor,l,num,cima=0,pila[40];
 char Epos[40],dato;
 printf("Escibe una operacion \n");
 flushall();
 gets(Epos);
 dato=Epos[x];
 l=strlen(Epos);
 Epos[l]=')';
 while(dato!=')')
 {
  if(dato!='^' && dato!='*' && dato!='+' && dato!='-' && dato!='/')
  {
   printf("Dame un valor para %c :\t",dato);
   scanf("%d",& num);
   printf("\n");
   cima=meter(pila,num,cima);
  }
  else
  {
   a=sacar(pila,cima);
   cima--;
   b=sacar(pila,cima);
   cima--;
   switch(dato)
   {
    case '+':
    c=b+a;
    break;
    case '-':
    c=b-a;
    break;
    case '/':
    c=b/a;
    break;
    case '*':
    c=b*a;
    break;
    case '^':
    c=pow(b,a);
    break;
   }
   cima=meter(pila,c,cima);
  }
  x++;
  dato=Epos[x];
 }

 valor= sacar (pila,cima);
 printf("El resultado es %d",valor);
 getch();
}




