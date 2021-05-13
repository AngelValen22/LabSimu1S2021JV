/*
Autor: Angel Valenzuela
Fecha:  mar may 11 23:07:50 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o final final.c
Version: 1.0
Librerias: stdio
Resumen:Metodo de Rugen-Kutta
*/

//Librerias
#include <stdio.h>
#include <math.h>
//Declaracion e inicializacion de variables globales
void salida(char nom[],float E,float TSFC,float CD,float A,float m,float mf,int n);
void du(float E,float cd,float a,float m,float mf,float TSFC);
float un();
void du1(float E,float m,float mf,float TSFC);
float un1();
float ROY();
void tiM();
float G=0.00000000006693,Rt=6378000,Mt=5.9736e+24;
float R=287.06,L=0.0065,g0=9.81,T0=288.15,P0=101325;
float E1=3e+7,E2=2.7e+7,E3=2.5e+7;
float TSFC1=3.248e-4,TSFC2=2.48e-4,TSFC3=2.248e-4;
float CD1=61.28,CD2=61.27,CD3=70.25;
float A1=201.06,A2=201.06,A3=215.00;
float m1=1.1e+5,m2=1.1e+5,m3=1.8e+5;
float mf1=1.5e+6,mf2=1.5e+6,mf3=2.1e+6;
float u=0,t=0,y=0.02,h=1,ym,delta=0.1,dU,dU1;
float tim[3];
float Alturas[3];
char nom1[10]="Ah mun";
char nom2[10]="Ahau Kin";
char nom3[10]="Chac";
int main() {
	//tiempo que tardan en consumir el combustible
	tiM();
	//Cohete 1
	FILE *pf1=fopen("Cohete1","wt");
	//ciclo que nos auyda con los limites impuestos en el problema.
	//La condicion del ciclo nos ayuda con el limite impuesto por el tiempo que tarda en consumir el combustible
	while(tim[0]>=t) {
		// if con la condicion de altura
		if ((T0/L)<=y){
			du1(E1,m1,mf1,TSFC1);
			un1();
			t+=delta;
			fprintf(pf1,"%.2f\t%.2f\t%.2f\n",t,y,u);

		}
		else{
			du(E1,CD1,A1,m1,mf1,TSFC1);
			un();
			t+=delta;
			fprintf(pf1,"%.2f\t%.2f\t%.2f\n",t,y,u);
		}
	}
		fprintf(pf1,"%.2f\t%.2f\t%.2f\n",t,y,u);
		fclose(pf1);
	Alturas[0]=y;
	t=0;
	y=0.02;
	u=0;
	salida(nom1,E1,TSFC1,CD1,A1,m1,mf1,0);


	//Cohete 2
	FILE *pf2=fopen("Cohete2","wt");
        //ciclo que nos auyda con los limites impuestos en el problema.
        //La condicion del ciclo nos ayuda con el limite impuesto por el tiempo que tarda en consumir el combustible
        while(tim[1]>=t) {
                // if con la condicion de altura
                if ((T0/L)<=y){
                        du1(E2,m2,mf2,TSFC2);
                        un1();
                        t+=delta;
                        fprintf(pf2,"%.2f\t%.2f\t%.2f\n",t,y,u);

                }
                else{
                        du(E2,CD2,A2,m2,mf2,TSFC2);
                        un();
                        t+=delta;
                        fprintf(pf2,"%.2f\t%.2f\t%.2f\n",t,y,u);
                }
        }
                fprintf(pf2,"%.2f\t%.2f\t%.2f\n",t,y,u);
                fclose(pf2);
        Alturas[1]=y;
        t=0;
        y=0.02;
        u=0;
        salida(nom2,E2,TSFC2,CD2,A2,m2,mf2,1);
	

	
	FILE *pf3=fopen("Cohete3","wt");
        //ciclo que nos auyda con los limites impuestos en el problema.
        //La condicion del ciclo nos ayuda con el limite impuesto por el tiempo que tarda en consumir el combustible
        while(tim[2]>=t) {
                // if con la condicion de altura
                if ((T0/L)<=y){
                        du1(E3,m3,mf3,TSFC3);
                        un1();
                        t+=delta;
                        fprintf(pf3,"%.2f\t%.2f\t%.2f\n",t,y,u);

                }
                else{
                        du(E3,CD3,A3,m3,mf3,TSFC3);
                        un();
                        t+=delta;
                        fprintf(pf3,"%.2f\t%.2f\t%.2f\n",t,y,u);
                }
        }
                fprintf(pf3,"%.2f\t%.2f\t%.2f\n",t,y,u);
                fclose(pf3);
        Alturas[2]=y;
        salida(nom3,E3,TSFC3,CD3,A3,m3,mf3,2);
return 0;
}
// Calculo de ro que depende del y
float ROY(){
	float roy;
        roy=(P0/(R*T0))*(pow(1-(L*y)/T0,g0/(R*L)));
        return roy;
}

// Calculo de du del metodo 
void du(float E,float cd,float a,float m,float mf,float TSFC){
	dU=(E-(0.5*ROY()*cd*a*u*fabs(u))-(m+mf-TSFC*E*t)*(G*Mt*pow(Rt+y,-2)))/(m+mf-TSFC*E*t);

}
//Iteraciones del metodo de sustitucion de euler de segundo grado
float un(){
	y+=u*h;
	u+=h*dU;
	return u;
}
//Calculo de de del metodo
void du1(float E,float m,float mf,float TSFC){
        dU1=(E-(m+mf-TSFC*E*t)*(G*Mt*pow(Rt+y,-2)))/(m+mf-TSFC*E*t);

}
//Iteraciones del metodo de sustitucion de euler de segundo grado
float un1(){
        y+=u*h;
        u+=h*dU1;
        return u;
}


//Tiempo en el cual se agota el combustible

void tiM(){
	tim[0]=mf1/(TSFC1*E1);
	tim[1]=mf2/(TSFC2*E2);
	tim[2]=mf3/(TSFC3*E3);
}

//Funcion que muesta los datos de salida
void salida(char  nom[],float E,float TSFC,float CD,float A,float m,float mf,int n){
	printf("Nombre:  %s \n ",nom);
	printf("Empuje del cohete: %.2f\n ",E);
	printf("Consumo especifico del empuje: %.2f\n ",TSFC);
	printf("Coeficiente de forma CD %.2f\n ",CD);
	printf("Seccion tranversal del cohete : %.2f\n ",A);
	printf("Masa del propulsor : %.2f\n",m);
	printf("Masa inicial del combustible: %.2f\n ",mf);
	printf("La altura maxima es: %.2f \n ",Alturas[n]);
	printf("El tiempo en el que se acaba el combustible: %.2f\n ",tim[n]);
}














