/*
Autor: Angel Valenzuela
Fecha:  mar may 4 22:35:20 CST 2021
compilador:  gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609
Para compilar gcc -o L4 L4.c
Version: 1.0
Librerias: stdio
Resumen:
*/

//Librerias
#include <math.h>
#include <stdio.h>
//Declaracion e inicializacion de variables globales
void multi(float mat1[3][3],int con );
void suma(float mat1[3][3],float mat2[3][3]);
void resta(float mat1[3][3],float mat2[3][3]);
void multim(float mat1[3][3],float mat2[3][3]);
void deter(float mat[3][3]);
void inver(float mat[3][3]);	
float matA[3][3];
float matB[3][3];
int f=0,c=0;
float cons;
int main() {
	/*puts("Ingrese una constante");
	scanf("%f",&cons);*/
	puts("Ingrese primera matriz");
	for(f=0;f<=2;f++){
		for (c=0;c<=2;c++){
			puts("Ingrese un valor");
			scanf("%f",&matA[f][c]);
			}
		printf("\n");
	}
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			puts("Ingrese un valor");
                        scanf("%f",&matB[f][c]);
		}
	}
	multi(matA,cons);
	suma(matA,matB);
	resta(matA,matB);
	multim(matA,matB);
	deter(matA);
	inver(matB);
	return 0;
}

void multi(float mat1[3][3],int con ){
	float mat[3][3];
	for(f=0;f<3;f++){
                for (c=0;c<3;c++){
                        mat[f][c]=(mat1[f][c])*con;
                }
        }
	printf("La mulriplicacion de la primera matriz por la constante es: \n");
	for(f=0;f<3;f++){
                for (c=0;c<3;c++){
                        printf("%.0f  ",mat[f][c]);
                }
              printf("\n");
        }
}

void suma(float mat1[3][3],float mat2[3][3]){
	float mat[3][3];
	for(f=0;f<3;f++){
                for (c=0;c<3;c++){
                        mat[f][c]=(mat1[f][c] + mat2[f][c]);
                }
        }
        printf("La suma de las matrices es: \n");
        for(f=0;f<3;f++){
                for (c=0;c<3;c++){
                        printf("%.0f  ",mat[f][c]);
                }
              printf("\n");
        }
}


void resta(float mat1[3][3],float mat2[3][3]){
        float mat[3][3];
        for(f=0;f<3;f++){
                for (c=0;c<3;c++){
                        mat[f][c]=(mat1[f][c] - mat2[f][c]);
                }
        }
        printf("La resta de las matrices es: \n");
        for(f=0;f<3;f++){
                for (c=0;c<3;c++){
                        printf("%.0f  ",mat[f][c]);
                }
              printf("\n");
        }
}

void multim(float mat1[3][3],float mat2[3][3]){
	float matz[3][3];
	for(int d=0;d<3;d++){
	        for(f=0;f<3;f++){
        	        for (c=0;c<3;c++){
                	        matz[d][f]+=(mat1[d][c] * mat2[c][f]);
				/*printf("%f\n",mat[d][f]);*/
               		 }
       		 }
	}
        printf("La multiplicacion de las matrices es: \n");
        for(f=0;f<3;f++){
                for (c=0;c<3;c++){
                        printf("%.0f  ",matz[f][c]);
                }
              printf("\n");
        }
}

void deter(float mat[3][3]){
	float a,b,res ;
              printf("\n");
        
	a=((mat[0][0])*(mat[1][1])*(mat[2][2]))+((mat[1][0])*(mat[2][1])*(mat[0][2]))+((mat[2][0])*(mat[0][1])*(mat[1][2]));
	b=(mat[0][2]*mat[1][1]*mat[2][0])+(mat[1][2]*mat[0][0]*mat[2][1])+(mat[2][2]*mat[0][1]*mat[1][0]);
	puts("El determinante es de la matriz A es:  ");
	printf("%f\n ",a-b);

}

void inver(float mat[3][3]){
	printf(" La traspuesta de la matriz B es:\n"); 
	for(f=0;f<3;f++){
                for (c=0;c<3;c++){
                        printf("%.0f  ",mat[c][f]);
                }
              printf("\n");
        }
}









