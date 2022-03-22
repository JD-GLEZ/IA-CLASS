#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct contacto{
        char nombre[40];
        char direccion[80];
        int edad;
        long telefono;
}contacto_t;

int main (void)
{
     contacto_t c[1]; //struct contacto c1;= contacto_t c1;
     printf("Ingrese el nombre:");
     fflush(stdin);
     gets(c[1].nombre);
     printf("n\Ingrese la direccion");
     fflush(stdin);
     gets(c[1].direccion);
     printf("Ingrese Edad");
     scanf("%d", &c[1].edad);
     printf("Ingrese el Telefono");
     scanf("%d", &c[1].telefono);
     printf("%s vive en %s con una edad de %d y su telefono es %d",c[1].nombre,c[1].direccion,c[1].edad,c[1].telefono);
     getch();
     return 0;
}