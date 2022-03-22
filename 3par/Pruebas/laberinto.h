#include <conio.h>
#include <stdio.h>
#include <string.h>
typedef struct Dungeon{
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

D leerarchivo(char path[],D L)
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
            fscanf(archivo, "%s\n" , & L.L15;
            break;
        }
    }
    fclose(archivo);
    return (L);
}
