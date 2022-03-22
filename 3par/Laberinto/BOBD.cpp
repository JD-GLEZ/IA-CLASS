#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct Dungeon{//Laberinto
    char L1[20];
    int Paso1[20]; //Cada paso que BOB da sobre la baldosa es contado 0por las que no paso ; 1 por las que paso ; 1++ Por las que paso mas de una vez 
    char L2[20];
    int Paso2[20];
    char L3[20];
    int Paso3[20];
    char L4[20];
    int Paso4[20];
    char L5[20];
    int Paso5[20];
    char L6[20];
    int Paso6[20];
    char L7[20];
    int Paso7[20];
    char L8[20];
    int Paso8[20];
    char L9[20];
    int Paso9[20];
    char L10[20];
    int Paso10[20];
    char L11[20];
    int Paso11[20];
    char L12[20];
    int Paso12[20];
    char L13[20];
    int Paso13[20];
    char L14[20];
    int Paso14[20];
    char L15[20];
    int Paso15[20];

}D;

typedef struct GeneseBob{//Los pasos que va a dar cada BOB
    int M[226];         //Movimiento que debe de hacer Bob va del 1-4
    int cal; 			//Calificacion de cada BOB son Valores desde 0-100
    int POSX;           //Posicion en X
    int POSY;           //Posicion en Y

}GB;

GB LLenar(GB B)
{
    int x=0;
    int Y= rand() % 4;
    while (x<225)
    {
        Y= rand() % 4;
        Y++;        
        B.M[x]=Y;
        printf("%d",B.M[x]);
        x++;
    }
  return(B);
}

void inprin(D L)        //Imprime el Laberinto y a BoB 
{
    gotoxy(10,5);  printf("%s",L.L1);
    gotoxy(10,6);   printf("%s",L.L2);
    gotoxy(10,7);   printf("%s",L.L3);
    gotoxy(10,8);   printf("%s",L.L4);
    gotoxy(10,9);   printf("%s",L.L5);
    gotoxy(10,10);  printf("%s",L.L6);
    gotoxy(10,11);  printf("%s",L.L7);
    gotoxy(10,12);  printf("%s",L.L8);
    gotoxy(10,13);  printf("%s",L.L9);
    gotoxy(10,14);  printf("%s",L.L10);
    gotoxy(10,15);  printf("%s",L.L11);
    gotoxy(10,16);  printf("%s",L.L12);
    gotoxy(10,17);  printf("%s",L.L13);
    gotoxy(10,18);  printf("%s",L.L14);
    gotoxy(10,19);  printf("%s",L.L15);

}

D leerarchivo(char path[],D L) //Lee el Laberinto
{
    FILE *archivo;
    archivo = fopen(path,"r");
    if (archivo != NULL)
    {
        while(!feof(archivo))
        {
            fscanf(archivo, "%s\n" , & L.L1);
            fscanf(archivo, "%s\n" , & L.L2);
            fscanf(archivo, "%s\n" , & L.L3);
            fscanf(archivo, "%s\n" , & L.L4);
            fscanf(archivo, "%s\n" , & L.L5);
            fscanf(archivo, "%s\n" , & L.L6);
            fscanf(archivo, "%s\n" , & L.L7);
            fscanf(archivo, "%s\n" , & L.L8);
            fscanf(archivo, "%s\n" , & L.L9);
            fscanf(archivo, "%s\n" , & L.L10);
            fscanf(archivo, "%s\n" , & L.L11);
            fscanf(archivo, "%s\n" , & L.L12);
            fscanf(archivo, "%s\n" , & L.L13);
            fscanf(archivo, "%s\n" , & L.L14);
            fscanf(archivo, "%s\n" , & L.L15);
            break;
        }
        fclose(archivo);
    }
    return (L);
}

GB ID(GB B, D L)
{
    char BoB ='B';
    int P=0;
    int x=1;
    int y=2;
     while (P<225)
    {
        switch(B.M[P])
        {
        case 1:     //Arriba
            break;
        case 2:     //Abajo
            break;
        case 3:     //Izquierda
            break;
        case 4:     //Derecha
            break;
        default :   //Error 
            break;
        }       
        
        P++;
    }   
 return(B);
}


int klaren(D L)
{
    GB B[450]; // 15*15=225*2=450
    int M1=0; //Evalua si algun Bob Lega a la Meta int 
    int x=0;
    int G=0; // Numero de la Generacion
    while(x<250) //Llena a cada uno de los Bob´s de la Primer Generacion
    {
     B[x]=LLenar(B[x]);
         //printf("\n %d",B[x].M[x]);
         //printf("\n %d \n",x);
     x++;
    }
    x=0;
    while(M1==0)
    {
        while(x<250)
        {
            gotoxy(10,3); printf("Genracion: %d ",G);
            gotoxy(10,4); printf("No.BoB: %d ",x);
            B[x]=ID(B[x]);
            x++;
        }
        x=0;
        G++;
    }
    //getch();
    
 return(M1);     
}

void BOBs() //Main del Archivo Principal
{
    
    //int M1=0; //Evalua Si algun Bob ya llego a la Meta
    D L;
    L=leerarchivo("Lab.txt",L);
    inprin(L);
    klaren(L);
    getch();
}

void main()
{
    BOBs();
}