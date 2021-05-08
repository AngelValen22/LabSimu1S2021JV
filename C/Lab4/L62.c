/*
Autor: Angel Valenzuela
Fecha:  vie abr 23 13:00:13 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o L62 L62.c
Version: 1.0
Librerias: stdio
Resumen:
*/

//Librerias
#include <stdio.h>
#include <math.h>
//Declaracion e inicializacion de variables globales
int op;
void cal1(int op1);
void cal2(int op1);
void cal3(int op1);
void cal4(int op1);
int i;
float res=0;
int main() {
	printf("ingrese el numero de en donde comenzo de la serie \n");
	scanf("%d",&op);
	printf("El Resultado de la primera serie es:");
	cal1(op);
	printf("\n");
	printf("El Resultado de la segunda serie es:");
	cal2(op);
	printf("\n");
	printf("El Resultado de la tercera serie es:");
	cal3(op);
	printf("\n");
	printf("El Resultado de la cuarta serie es:");
	cal4(op);
return 0;
}
void cal1(int op1){
	res=0;
	for (i=1;i<=op1;i++){
		res+=i*i*i-3*i*i;
	}
		printf("%.0f \n",res);
	

}
void cal2(int op1){
	res=0;
	for (i=2;i<=op1;i++){
		res+=(3/(i-1));
	}	
	printf("%.0f \n",res);
	
}
void cal3(int op1){
	res=0;
	for (i=1;i<=op1;i++){
		res+=(1/sqrt(5))* ((pow((1+sqrt(5))/2,i))-(pow((1-sqrt(5))/5,i)));
		}	
	printf("%.4f \n",res);
	
}
void cal4(int op1){
	res=0;
	for (i=2;i<=op1;i++){
		res+=(0.1)*(3*(pow(2,i-2))+4);
	}
	printf("%.4f \n",res);
	
}











