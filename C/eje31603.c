/*
Autor: Angel Valenzuela
Fecha:  jue mar 18 02:06:09 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o eje3 eje3.c
Version: 1.0
Librerias: stdio
Resumen:Calcula si el numero ingresado en primo si el numero es mayor a 1.
*/

//Librerias
#include <stdio.h>
//Declaracion e inicializacion de variables globales
int n=0,i=2,primo=1;
int main() {
	//Ingreso del valor a evaluar
        printf("Ingrese un numero entero:");
        scanf("%d",&n);
	//Ciclo para calcular si el valor es primo.
        while (i<(n-1) && primo==1){
		//Calcula si el numero tiene residuo igual a 0, si lo tiene el nimero no es primo
                if ((n%i)==0){
                primo=0;
                }
		//Contador el cual va desde 1 hasta n-1 pero no es nesesario que vaya hasta esta cantidad con que vaya hasta n/2 es suficiente pero para numeros pequeños es mejor n-1
                i++;
        }
	//El contador primo da el resultado si el numero es primo o no.
        if (primo==0){
                printf("El nunero no es primo \n ");
        }
        else{
                printf("El nunero es primo \n ");
        }
return 0;
}

