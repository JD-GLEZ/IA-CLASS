#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

///// "/0" final de una cadena
typedef struct Base_Conocimiento{       /////////////////////////////////////////////////////////
         int R; 		    //Regla
        char Ant[40];   //Antecedentes
        char Cons[40];  //Consecuentes
        int Ban;        //Si vale 1 Significa que ya ha sido utilizaddda por lo tanto no se vuelve a llamar
}Base;

int CC[40]={'\0'};// Conjunto Conflicto
int Ccc=0;		    // Contador de CC// Para saber en que Posicion del Arreglo "CC" se encuentra

void main()///Funcion que Equpiara
{
    
    Base B[40];
    int X=0;
    int Z; //Para ver si se encontro un dato en de la Base de Hechos en la Base de conocimiento,solo es una bandera el verdadero trabajo lo hace "z"
    int x; //Para saber el numero de ciclos que genera "j", tambien sirve para restar
    int l; //Para saber la longitud de los Antecedentes
    int l1; //Para saber la longitud de "Base de Hechos"
    int j;
    int k;
    char BH[20];
    strcpy(BH,"o&m&x&h");
    l1=strlen(BH);
    FILE *archivo;  // Abre Archivo Donde esta Contenida Nuestra Base de Conocimientos. Solo es Lectura!!!!!!!!!!!!!!
    archivo = fopen("Examen.txt","r");
    if (archivo != NULL)
    {
        while(!feof(archivo))
        {
            fscanf(archivo, "%d\n" , &B[X].R);
            printf("\n %d", B[X].R);
            fscanf(archivo, "%s\n" , &B[X].Ant);
            printf("\t %s", B[X].Ant);
            fscanf(archivo, "%s\n" , &B[X].Cons);
            printf("\t \t \t %c", B[X].Cons[0]);
            B[X].Ban=0;
            X++;
        }
        fclose(archivo);
    }
    printf("\n");
    for(int i=0;i<X;i++)// Para barrer las Reglas y conocer el numero de Regla que se Cumple
    {
        //printf("Regla %d: \n",i);
         x=0; //Reinicia "x"
         Z=0; //Reinicia "z"
        l=strlen(B[i].Ant);
        j=0;
        //for(int j=0;j<l;j++)//Para Barrer El contenido de los antecedentes en la Base de Hechos
        while(j<=l)
        {
             //   printf("Letra No %d: \n",j);
        		x++; //Incrementa una Vez por cada uno de los antecedentes en la "Base de Conocimientos"
            //for(int k=0;k<l1;k++)//Para Comparar el contenido de la BH con  la "Base de Conocimiento"
            k=0;
            while(k<=l1)
            {
                //printf("Letra %d de la BH:",k);
         		if(B[i].Ant[j]==BH[k])//Revisa si las variables de la Base de Hechos coinciden con alguna Regla de la base de Conocimiento
            	{
                 Z++;
                 break;
            	}
               //k++;
                k=k+2;
            }
         //j++;
        j=j+2;
        }
        
        if(x==Z && B[i].Ban==0)// Si "x" es igual a "z" significa que se tiene los antecedentes necesarios para los concecuentes de dicha Regla. Y si Ban=0 significa que no ha sido llamada esta regla
        {
         	CC[Ccc]=i;
            printf(" \n Conjunto conflicto:%d",CC[Ccc]);
            printf("\n  Consecuentes es: %c",B[i].Cons[0]);
            Ccc++;
        }
    }
    printf("Fin");
    getch();
}