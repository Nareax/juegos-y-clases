#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct materia {
	              char nom[30];
	              int semestre;
	              int notas [4];
	              float def;
                          };
struct estudiante{ char nombre[30];
                   int edad,cedula;
                   char carrera[30];
                   int IA;
                   materia mat[3];
                         };

int main(int argc, char** argv) {
	int i,j,k,aux=0,suman=0, sumadef=0;
	estudiante x;
	estudiante sec[30];
	/*printf("\nnombre: ");
	fflush(stdin);
	gets(x.nombre);
	printf("\nedad: ");
	scanf(" %d", &x.edad);
	printf("\ncedula: ");
	scanf(" %d", &x.cedula);
	fflush(stdin);
	printf("\ncarrera: ");
	gets(x.carrera);*/
	
	for(i=0;i<2;i++){
		printf("\nestudiante %d", i+1);
		printf("\nnombre: ");
		fflush(stdin);
		gets(sec[i].nombre);
		printf("\nedad: ");
		scanf(" %d", &sec[i].edad);
		printf("\ncedula: ");
		scanf(" %d", &sec[i].cedula);
		printf("\ncarrera: ");
		fflush(stdin);
		gets(sec[i].carrera);
		
		for(j=0;j<2;j++){
			printf("\nnombre de la materia: ");
			fflush(stdin);
			gets(sec[i].mat[j].nom);
			printf("\nsemestre: ");
			scanf(" %d", &sec[i].mat[j].semestre);
			
			for(k=0;k<2;k++){
				printf("\nnota %d: ",k+1);
				scanf(" %d", &sec[i].mat[j].notas[k]);
				suman=suman+sec[i].mat[j].notas[k];
				printf(" acumulado: %d", suman);
			}
			
		    sec[i].mat[j].def=suman/4;
			sumadef=sumadef+sec[i].mat[j].def;
			printf(" definitiva: %f ",  sec[i].mat[j].def);
			suman=0;
		}
		sec[i].IA=sumadef/3;
		printf(" %f ", sec[i].IA);
		sumadef=0;
	}
	
	system("pause");
	system("cls");
	for(i=0;i<2;i++){
		printf(" %d ", sec[i].cedula);
	}
	
	return 0;
}
