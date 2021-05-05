/*
Autor: Angel Valenzuela
Fecha:  mar may 4 20:24:06 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o pr2 pr2.c
Version: 1.0
Librerias: stdio
Resumen:
*/

//Librerias
#include <stdio.h>
//Declaracion e inicializacion de variables globales

//Librerias
#include <stdio.h>
#include <math.h>
//Declaracion e inicializacion de variables globales
//variable para calcular la primera iteracion.
float x1=0;
// variable para calcular las siguientes iteraciones.
float cal=0;
//variable el numero de iteraciones.
int n=0;
int i;
float fun(float xn);
float fund(float xn);
int main() {
        puts("Ingrese el numero de iteracciones");
        scanf("%d",&n);
        x1=10;
        //calculo de la primera iteracion.
        cal=x1-(fun(x1)/fund(x1));
        printf("%.20f \n ",cal);
        // calculo de las siguietes iteraciones.
        for( i=0;i<n-1;i++){
                cal=cal-(fun(cal)/fund(cal));
                printf("%.20f \n ",cal);
        }

return 0;
}
//funcion que valua la funcion original sin derivar.
float fun(float xn){
        float res;
        res=(xn)-(1/pow(2,xn));
        return res;
}
//funcion que valua la funcion derivada.
float fund(float xn){
        float resn;
        resn=(log(2)/pow(2,xn))+1;
        return resn;

}




