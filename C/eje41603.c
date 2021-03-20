/*
Autor: Angel Valenzuela
Fecha:  vie mar 19 17:16:35 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o eje41603 eje41603.c
Version: 1.0
Librerias: stdio
Resumen:Calcula los numeros primos en un rango elejodo por el usuario
*/

//Librerias
#include <stdio.h>
//Declaracion e inicializacion de variables globales
int n1=0,n2=0,i=0,j=2,primo=1;
int main() {
        //Ingreso el inicio del rango 
        printf("Ingrese un numero  ");
        scanf("%d",&n1);
        //Ingreso el final del rango
        printf("ingrese otro numero mayor al anterior  ");
        scanf("%d",&n2);
        //Guarda el inicio del rango en i   
        i=n1;
	//Ciclo que principal que genera los numeros primos en el rango.
        while (i<=n2){
                j=2;
                 primo=1;
		//Ciclo que calcula los numeros primos valuando sus residuos 
                 while (j<i && primo==1){
                 if (i%j==0){
			// Marcador que decide si el numero es primo o no
                        primo=0;
                 }
                j++;
                }
		//Pregunta si el valor es un numero primo a traves del marcador primo en el ciclo
                if (primo==1){
			//muestra el numero calculado en el ciclo 
                        printf("%d \n ",i);
                }
                i++;
        }
return 0;
}
