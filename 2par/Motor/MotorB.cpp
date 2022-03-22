#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

///// "/0" final de una cadena
typedef struct Base_Conocimiento{       
         int R; 		    //Regla
        char Ant[40];   //Antecedentes
        char Cons[40];  //Consecuentes
        int Ban;        //Si vale 1 Significa que ya ha sido utilizaddda por lo tanto no se vuelve a llamar
}Base;
int CC[40]={'\0'};// Conjunto Conflicto
int Ccc=0;		    // Contador de CC// Para saber en que Posicion del Arreglo "CC" se encuentra


void Eqp(Base B[20],char BH[40],int X )///Funcion que Equpiara
{
    int Z; //Para ver si se encontro un dato en de la Base de Hechos en la Base de conocimiento,solo es una bandera el verdadero trabajo lo hace "z"
    int x; //Para saber el numero de ciclos que genera "j", tambien sirve para restar
    int l; //Para saber la longitud de los Antecedentes
    int l1; //Para saber la longitud de "Base de Hechos"
    int j;
    int k;
    l1=strlen(BH);
    for(int i=0;i<=X;i++)// Para barrer las Reglas y conocer el numero de Regla que se Cumple
    {
        x=0; //Reinicia "x"
        Z=0; //Reinicia "z"
        l=strlen(B[i].Ant);
        j=0;
        while(j<=l)
        {
            x++; //Incrementa una Vez por cada uno de los antecedentes en la "Base de Conocimientos"
            k=0;
            while(k<=l1)
            {
         		if(B[i].Ant[j]==BH[k])//Revisa si las variables de la Base de Hechos coinciden con alguna Regla de la base de Conocimiento
            	{
                 Z++;
                 break;
            	}
            k=k+2;
            }
        j=j+2;
        }
        if(x==Z && B[i].Ban==0)// Si "x" es igual a "z" significa que se tiene los antecedentes necesarios para los concecuentes de dicha Regla. Y si Ban=0 significa que no ha sido llamada esta regla
        {
            //printf("Regla %d",i);
         	CC[Ccc]=i;
            Ccc++;
            //printf("Consecuente %s",B[i].Cons);
        }
    }
}

int VM(char BH[40],char M[10])    //Verifica si Meta esta contenida en Base de Hechos
{                         //Esta parte solo funciona para Caracteres. Se debe de modificar si se quiere Utilizar String!!!!!!!!!!!
    int M1=0;
    int l;
    int i;
    l=strlen(BH);    // Para saber el tamanio de Base de Hechos
    for(i=0;i<=l;i++)
    {
        if(M[0]==BH[i]) //Si esta contenida mi bandera "M1" se prende
        {
            M1=1;
            break;
        }
        else
        {
            M1=0;
        }
        i++;
    }
    return(M1);
}

void Fine()                            ///////////////////////////////////////////////////////////
{

    Base B[20];         //Estructura donde se Guardan las variables de la Base de Conociemientos
    int X=1;            // Variable que Cuenta el numero de Reglas que hay
    int Y; //rand() % (X+1);// Auxiliar para CC, Rand Necesita ser declarado dos veces para ser totalmente aleatorio
    char BH[40]={'\0'};  // Base de Hechos,Se Elimina cualquier contenido de la base de Hechos
    int Lbh;					// Tamanio de Base de hechos
    char NH[40]={'\0'};        //Nuevos Hechos
    int R;  // Resolver Cojunto Conflicto
    int C=0;  //CC variable que ayuda a validar la bandera de la Base de Hechos
    char M[10]={'\0'}; //Meta
    int M1;           //Auxiliar para sabe si meta esta contenida en BH
    printf("Regla \t Antecedentes \t   Consecuentes");
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

    Y= rand() % (X+1); 
    CC[0]=Y;  
    printf("\n \n Los Hechos Iniciales deben de Ir separados por un & \n");
    printf("Escribe Hechos Iniciales: ");
    flushall();        
    scanf("%s",&BH);   
    printf("Escribe una Meta: ");///Recibe la Meta que desea el Usuario.Si se deja  Vacia -***********
    flushall();
    scanf("%c",&M);
    if(M[0]=='\0')
    {
    	M[0]='X';
    }
    M1=VM(BH,M);
    while (M1==0 || CC[0]!='\0')//Ciclo Mientras la meta no se cumpla
    {
        if(CC[0]!='\0')///////// Si mi conjunto Conflicto se vacia se rompe ***Nota: Normalmente '\0' y '0' son iguales por lo que se tiene que hacer la distincion
        {
            Eqp(B,BH,X);
            if(CC[0]!='\0')
            {
                //printf("Si entro");
                for(int i=0;i<Ccc;i++)//Para revisar que reglas han sido llamadas y activar su bandera si es el caso
                {
                    C=CC[i];
                    //printf("%d",C);
                    //C;
                    B[C].Ban=1;// La bandera de la Regla  Se activa por lo que se encuentra en Conjunto Conflicto y no es necesario Volver a Guardarla en "CC"
                }
               R=C;
               printf("\n R %d = %s = %s ",R,B[R].Ant,B[R].Cons);
               CC[Ccc]='\0';
               Ccc--;
               strcpy(NH,B[C].Cons);// Se llama la Ultima Regla Guardada en y los Consecuentes son Guardados en "NH"
               Lbh=strlen(BH);
               BH[Lbh]='&';
               BH[Lbh+1]=B[R].Cons[0];
            }
    		M1=VM(BH,M);
        }
        else
        {
            break;
        }
    }

    if(M1==1)
    {
      printf("\n Exito :D ");
      printf("\n La Base de Hechos es: %s ",BH);
    }
    else
    {
    	printf("\n Fracaso :'( ");
      printf("\n La Base de Hechos es: %s ",BH);
    }
}


void main()                //////////////////////////////////////////////////////////////////////////////////////////
{
    char Con[2];    // Variable para meter otro Valor
    Con[0]='Y';
    while (Con[0]=='Y' || Con[0]=='y')
    {
    		for(int i=0;i<=Ccc;i++)
         {
    	  		CC[i]='\0';
         }
        Ccc=0;
        Fine();
        //getch();

        printf("\n Deseas Continuar Y/N: ");
        flushall();
        scanf("%c",&Con[0]);
        clrscr();
    }

}