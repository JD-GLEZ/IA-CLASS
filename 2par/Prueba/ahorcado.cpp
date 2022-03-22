#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void op (struct palabras,int ply);
struct palabras
	{
	char p1[15];
	char p2[15];
   char p3[15];
	char p4[15];
	char p5[15];
	};

void main()
{
	struct palabras pal;
   int jugadores,x;
   char cont[3];
	printf("Bienvenido al ahorcado locohon\n");
	printf("Las reglas son las siguientes.... presiona enter para continuar \n");
	getch();
	clrscr();
	printf("Solo es para 1 o 2 jugadores, solo se permiten 5 errores\n");
 do
  {
	printf("Ingresa el numero de jugadores 1 o 2: \n");
	scanf("%d",&jugadores);
   if (jugadores ==1 || jugadores==2)
   {
	if(jugadores==1)
		{
		printf("Pidele a alguien que te ingrese 5 palabras:\n");
		flushall();
		printf("Ingresa palabra 1:==>");
		gets(pal.p1);
		flushall();
		printf("Ingresa palabra 2:===>");
		gets(pal.p2);
		flushall();
		printf("Ingresa palabra 3:====>");
		gets(pal.p3);
		flushall();
		printf("Ingresa palabra 4:=====>");
		gets(pal.p4);
		flushall();
		printf("Ingresa palabra 5:======>");
		gets(pal.p5);
       op (pal,jugadores);
      }
      if(jugadores==2)
		{
		printf("Escribe 5 palabras");
		flushall();
		printf("Ingresa palabra 1:==>");
		gets(pal.p1);
		flushall();
		printf("Ingresa palabra 2:===>");
		gets(pal.p2);
		flushall();
		printf("Ingresa palabra 3:====>");
		gets(pal.p3);
		flushall();
		printf("Ingresa palabra 4:=====>");
		gets(pal.p4);
		flushall();
		printf("Ingresa palabra 5:======>");
		gets(pal.p5);
       op (pal,jugadores);
      }
   }
   printf ("¿continuar jugando?");
   scanf ("%s",& cont);
   x = strcmp("si",cont);
 }while (x==0);
getch();
}

void op (struct palabras,int ply)
{
  struct palabras pal;
  int x=0,i,y=0,z,k,j;
  char palabra[20], ayu[20],cuerpo[2];
    	x = random(4);
   	switch (x)
   	{
   	case 0:
   	strcpy (palabra,pal.p1) ;
		y=strlen (palabra);
   	break;
   	case 2:
   	strcpy (palabra,pal.p2) ;
		y=strlen (palabra);
   	break;
   	case 3:
   	strcpy (palabra,pal.p3) ;
		y=strlen (palabra);
   	break;
   	case 4:
   	strcpy (palabra,pal.p4) ;
		y=strlen (palabra);
   	break;
   	case 5:
   	strcpy (palabra,pal.p5) ;
		y=strlen (palabra);
   	break;
   	}
   	if (ply==1)
   	{
        printf ("Tendras que encontrar 3 palabras");
        for (i=0;i<3;i++)
        {
         for (j=0;j<5;j++)
         {
            printf ("Escribe una letra");
            scanf ("%c",,& cuerpo);

            if ()
            {

            }
         }
        }
   	}
  		 if (ply==2)
   	{

   	}
   
   getch();
}