/*
Autor: Angel Valenzuela
Fecha:  jue mar 18 01:29:41 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o eje2 eje2.c
Version: 1.0
Librerias: stdio
Resumen:Calculo de la raiz entera de cualquier numero entero
*/

//Librerias
#include <stdio.h>
//Declaracion e inicializacion de variables globales
int i=0;
float N=0;
int main() {
	//Ingreso de un numero entero para calcular el raiz entera.
        printf("Ingrese un numero entero : ");
        scanf("%f",&N);
	//Ciclo el cual nos compara el valor N ingresado para calcular la raiz entera
        while ((i*i)<=N){
		//Contador del ciclo
                i++;
        }
        printf("\n");
	//Da la respuesta de la raiz entera
        printf("La raiz entera de %f  es %d \n",N,i-1);
return 0;
}

