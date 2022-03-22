#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void leerarchivo(char path[])
{
    FILE *archivo;
    int numero;
    
    archivo = fopen(path,"r");
    if (archivo != NULL)
    {
        while(!feof(archivo))
        {
            fscanf(archivo, "%d\n" , &numero);
            printf("numero: %d\n", numero);
        }
    }
    fclose(archivo);
}
void guardarArchivo (char path[],int numero)
{
    FILE *archivo;
     archivo = fopen(path,"a");
    if (archivo != NULL)
    {
        fprintf(archivo,"\n%d",numero);
    }
    fclose(archivo);
}
int main()
{
    leerarchivo("C:\\Users\\AFAR__000\\Dropbox\\IA\\2PAR\\Prueba\\path.txt");
    guardarArchivo("C:\\Users\\AFAR__000\\Dropbox\\IA\\2PAR\\Prueba\\path.txt",9595);
    getch();
    return EXIT_SUCCESS;
}
