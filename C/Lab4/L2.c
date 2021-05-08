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
void llenar();
void ordenA();
int par[3];
int copia;
int main() {
        llenar() ;
        printf("\n");
        ordenA();
        return 0;
}
void llenar(){
puts("ingrese 4 numeros enteros");
        while (n<4)
        {
		scanf("%d",&par[n]);
		n++;
        }
}
void ordenA(){
        for(n=0;n<4;n++)
        {
                for(m=n;m<4;m++)
                {
                        if (par[n]>=par[m])
                        {
                                copia=par[n];
                                par[n]=par[m];
                                par[m]=copia;
                        }
                         
                }
        }

        for(n=0;n<4;n++)
        {
                printf("%d \n",par[n]);
        }

}

