/*
Autor: Angel Valenzuela
Fecha:  lun abr 19 20:51:32 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o L1 L1.c
Version: 1.0
Librerias: stdio
Resumen:Muestra numeros pares del 2 al 20 y los ordena de forma acendente o decendente segun el usuario 
*/

//Librerias
#include <stdio.h>
//Declaracion e inicializacion de variables globales
int n=0;
int m=0;
int k=0;
void ordenD();
void llenar();
void ordenA();
int par[9];
int copia;
int b=0;
char mh;
int main() {
	llenar() ;
	printf("\n");
	while (n=0){
	if (mh=='a') {
		ordenA();
		n++;
		}
	if (mh=='d'){
		ordenD();
		n++;
		}
	}
	return 0;
}

void llenar(){
n=0;
puts("ingrese numeros pares del 2 al 20");
	while (n<10)
	{
		scanf("%d",&par[n]);
		if ((par[n]%2)==0 && par[n]<21 )
		{
			n++;
		} 
		else
		{
			par[n]=0;
			puts("Solo se permiten numeros pares del 2 al 20 ");
		}

	} 
}

void ordenA(){
	for(n=0;n<10;n++)
	{
		k=0;
		for(m=n;m<10;m++)
		{
			if (par[n]>=par[m])
			{
				copia=par[n];
				par[n]=par[m];
				par[m]=copia;
			}
				
		}
	}

	for(n=0;n<10;n++)
	{
		printf("%d \n",par[n]);
	}

}

void ordenD(){
        for(n=0;n<10;n++)
        {
                k=0;
                for(m=n;m<10;m++)
                {
                        if (par[n]<=par[m])
                        {
                                copia=par[n];
                                par[n]=par[m];
                                par[m]=copia;
                        }
                        
                }
        }

        for(n=0;n<10;n++)
        {
                printf("%d \n",par[n]);
        }
}







