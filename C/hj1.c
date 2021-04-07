/*
Autor: Angel Valenzuela
Fecha:  mar abr 6 18:39:30 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o hj1 hj1.c
Version: 1.0
Librerias: stdio
Resumen:Calculadora de operaciones Basicas
*/

//Librerias
#include <stdio.h>
//Declaracion e inicializacion de variables globales
int op=0; //Variable el cual nos ayuda a elejir la operacion deseada.
float n1=0,n2=0,res; //numeros con los cuales se realizaran las operaciones.
int ope(int op);

int main() {
	printf("Ingrese un numero del 1 al 4 para elejir la operacion: ");
	scanf("%d",&op);
	printf("Ingrese un numero: ");
	scanf("%F",&n1);
	printf("Ingrese otro numero: ");
        scanf("%F",&n2);
	ope(op);
	switch (op){
	case 1: printf("La suma es:  %f \n", res);
	break;
	case 2: printf("La resta es: %f \n ", res);
	break;
	case 3: printf("La multiplicacion es: %f \n ", res);
	break;
	case 4: printf("La division es: %f \n  ", res);
	break;
	}

return 0;
}
int ope(int op){
	switch (op){
        case 1: res=n1+n2;
	break;
	case 2: res=n1-n2;
	break;
	case 3: res=n1*n2;
	break;
	case 4: res=n1/n2;
	break;
	}
	return 0;
}




