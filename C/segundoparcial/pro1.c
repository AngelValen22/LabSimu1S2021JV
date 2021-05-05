/*
Autor: Angel Valenzuela
Fecha:  dom may 2 20:03:44 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o pro1 pro1.c
Version: 1.0
Librerias: stdio
iResumen: Metodo de minimos cuadrados.
*/

//Librerias
#include <stdio.h>
#include <math.h>
//Declaracion e inicializacion de variables globales.
// vector para los años. 
int vecx[]={1,2,3,4,5,6,7,8,9,10,11};
//vector el numero de habitantes.
int vecy[]={152,166,181,194,205,216,228,238,250,263,270};
int sumxy(int vec1[],int vec2[]);
int sumn (int vec3[]);
int sumx (int vec4[]);
// Pendiente de la ecuacion
float m;
// variables que determinaran el valor de la pendiente 
float m1=0;
float m2=0;
// constante de la ecuacion a encontrar
float b=0;

int main() {
	//se dividio en dos partes(m1 y m2) el valor de la pendiente para que sea mas facil de entender 
	m1=(11*sumxy(vecx,vecy)-(sumn(vecx)*sumn(vecy)));
	m2=11*sumx(vecx)-(sumn(vecx)*sumn(vecx));
	//Calculo de la pendiente a traves de m1 y m2
	m=(m1/m2);
	// constante de la ecuacion.
	b=(sumn(vecy)/11)-(m*sumn(vecx)/11);
	printf("la funcion de la forma es y=%.8fx+%.8f \n ",m1/m2,b);
return 0;
}

// funcion que calcula la sumatoria de multiplicar los valores (x_i)(y_i)
int sumxy(int vec1[], int vec2[]){
	int sumaxy=0;
	for (int i=0;i<=11;i++){
		sumaxy+= (vec1[i]*vec2[i]);
	}
return sumaxy;
}

//funcion que calcula la sumatoria de los valores (x_i) o (y_i)
int sumn (int vec3[]){
	int suman=0;	
	for (int i=0;i<=11;i++){
                suman+= vec3[i];
        }
return suman;
}
// funcion que calcula la sumatoria para los valores (x_1)^2 
int sumx (int vec4[]){
	int sumax=0;
	for (int i=0;i<=11;i++){
                sumax+= vec4[i]*vec4[i];
        }
return sumax;
}




