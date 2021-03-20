/*
Autor: Angel Valenzuela
Fecha:  vie mar 19 17:13:59 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o eje11603 eje11603.c
Version: 1.
Librerias: stdio
Resumen:Ingreso de valores de altura y calcula el valor de la media y el valor maximo y minimo
*/

//Librerias
#include <stdio.h >
//Declaracion e inicializacion de variables globales.
int main(){
	//Declaracion e inicializacion de variables locales.
        float x=0,med=0,max=0,min=0,res=0;
        int n=0;
	//Obtencion del primer valor de altura.
        printf("ingrese un valor de altura: ");
        scanf("%f",&x);	
	//Se iguala x a  min y max para comparar el valor de cada uno mas adelante.
        max=x;
        min=x;
	// ciclo el cual nos ayudara a ingresar los valores de altura mientras no se ingrese un valor de altuta negativo
        while  (x>=0){
		// Contador de valores de altura ingresados
                n++;
	// med captura el valor de las alturas y las suma ademas de guardarlas en si mismo  
                med+=x;
	//Pregunta si el ultimo valor de la altura ingresado en el mayor de  todos y los guarda  en max
                if (x>max){
                max=x;
                }
	//Pregunta si el ultimo valor de la altura ingresado es el menor de todos y lo guarda en min
                if (min>x){
                min=x;
                }
		//Ingreso del siguiente valor de altura
                printf("ingrese un valor de altura: ");
                scanf("%f",&x);
	// calculo de la media de las alturas
                res=med/n;
                }
	// pregunta si se ingreso un valor valido desde el inicio
        if (n=0){
	// muestra un mensaje si se ingreso un valor valido desde el inicio 
                printf("El numero que ingreso no es valido.");
                }
                else{
	// muestra el resultado de la media, el maximo y el minimo de los valores recien ingresaqdos 
                printf("\n");
                printf("La media es:  %.2f \n ",res);
                printf("El maximo es:  %.2f \n ",max);
                printf("El minimo es:  %.2f \n ",min);
                }
        return 0;
        }

~                                           
