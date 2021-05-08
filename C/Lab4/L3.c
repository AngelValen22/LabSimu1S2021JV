/*
Autor: Angel Valenzuela
Fecha:  mar abr 20 19:00:06 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o L3 L3.c
Version: 1.0
Librerias: stdio
Resumen:
*/

//Librerias
#include <stdio.h>
#include <math.h>
//Declaracion e inicializacion de variables globales
void ingre(float vector[]);
void calculos();
void calculos2();
int n=0;
float vec1[2];
float vec2[2];
float res[9];
int main() {
	puts("Primer vector");
	ingre(vec1);
	puts("Segundo vector");
	ingre(vec2);	
	calculos();
	calculos2();
return 0;
}
void ingre(float vector[]){
	puts("Ingrese la coordenada x del vector");
	scanf("%f",&vector[0]);
	puts("Ingrese la coordenada y del vector");
        scanf("%f",&vector[1]);
	puts("Ingrese la coordenada z del vector");
        scanf("%f",&vector[2]);
	printf("El vector es:(%.2f,%.2f,%.2f) \n ",vector[0],vector[1],vector[2]);
}
void calculos (){
	for(n=0;n<3;n++){
		res[n]=vec1[n]+vec2[n];
	}
	printf("La suma de los vectores es:(%.2f,%.2f,%.2f) \n  ",res[0],res[1],res[2]);
	res[3]=vec1[0]*vec1[0]+vec1[1]*vec1[1]+vec1[2]*vec1[2];
	res[3]=sqrt(res[3]);
	printf("La magnitud del primer vector es:%.2f \n ",res[3]);
	res[4]=vec2[0]*vec2[0]+vec2[1]*vec2[1]+vec2[2]*vec2[2];
	res[4]=sqrt(res[4]);
        printf("La magnitud del segundo vector es:%.2f \n ",res[4]);
}
void calculos2 (){
	res[5]=vec1[0]*vec2[0]+vec1[1]*vec2[1]+vec1[2]*vec2[2];
	printf("El producto punto es %.2f \n",res[5]);
	res[6]=vec1[1]*vec2[2]-vec1[2]*vec2[1];
	res[7]=vec1[2]*vec2[0]-vec1[0]*vec2[2];
	res[8]=vec1[0]*vec2[1]-vec1[1]*vec2[0];
	printf("El producto cruz es:(%.2f,%.2f,%.2f)\n  ",res[6],res[7],res[8]);
}










