#include <conio.h>
#include <stdio.h>
#include <string.h>

typedef struct Dungeon{//Laberinto
    char L1[20];
    char L2[20];
    char L3[20];
    char L4[20];
    char L5[20];
    char L6[20];
    char L7[20];
    char L8[20];
    char L9[20];
    char L10[20];
    char L11[20];
    char L12[20];
    char L13[20];
    char L14[20];
    char L15[20];

}D;

typedef struct GeneseBob{//Los pasos que va a dar cada BOB
    char M[226];
    int cal; 			//Calificacion de cada BOB son Valores desde 0-100

}GB;

D leerarchivo(char path[],D L) //Lee el Laberinto
{
    int x=0;
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

int klaren(D L)
{


}

void BOBs() //Main del Archivo Principal
{
    int G=0; //Bandera para ver si los pasos de los BOB's estan vacios
    int M=0; //Evalua Si algun Bob ya llego a la Meta
    D L;
    //GB B[450];
    L=leerarchivo("Lab.txt",L);
    gotoxy(10,5);   printf("%s",L.L1);
    gotoxy(0,6);   printf("%s",L.L2);
    gotoxy(0,7);   printf("%s",L.L3);
    gotoxy(0,8);   printf("%s",L.L4);
    gotoxy(0,9);   printf("%s",L.L5);
    gotoxy(0,10);  printf("%s",L.L6);
    gotoxy(0,11);  printf("%s",L.L7);
    gotoxy(0,12);  printf("%s",L.L8);
    gotoxy(0,13);  printf("%s",L.L9);
    gotoxy(0,14);  printf("%s",L.L10);
    gotoxy(0,15);  printf("%s",L.L11);
    gotoxy(0,16);  printf("%s",L.L12);
    gotoxy(0,17);  printf("%s",L.L13);
    gotoxy(0,18);  printf("%s",L.L14);
    gotoxy(0,19);  printf("%s",L.L15);
    while(M==0)
    {
        M=klaren(L);

    }
    getch();
}

void main()
{
    BOBs();
}