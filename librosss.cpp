#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(int argc, char** argv) {
	
	int a,b,c, descuento, region, acumejem1=0, acumejem2=0,mayor=-9999, contcli=0,contr=0, numeroejem,precio, pori=45, poci=35, pce=25;
	char r, nombre[20], nombreaux[20];
	float descuentot, descuentof, preciof, cantdes=0,promdes;
	
	printf("\nhay algun cliente? (s)si o (n)no\n");
	r=tolower(getch());
	
	while(r=='s'){
		printf("\nnombre: ");
		fflush(stdin);
		gets(nombre);
		printf("\nejemplares de formato digital que desea= ");
		scanf(" %d", &a);
		printf("\nejemplares en formato fisico que desea= ");
		scanf(" %d", &b);
		printf("\ndigame cual es la region en que vive: (1)oriente, (2)occidente o (3)centro\n");
		scanf(" %d", &region);
		numeroejem=a+b;
		descuento=numeroejem*2;
		precio=(a*75)+(b*45);
		descuentot=(precio*descuento)/100;
		descuentof=precio-descuentot;
		printf("\n decuentot = %f", descuentot);
		printf("\nel precio de la compra es de: %2.f", descuentof);
	
		if(a>3 || b>3){
			printf("\nsu envio le ha salido gratis\n");	
		}
		else{
			if(region==1){
				printf("\nel precio aumentara por el envio de %d", pori);
				preciof=descuentof+pori;
				printf("\nel precio total de a compra es: %2.f", preciof);
			}
			if(region==2){
				printf("\nel precio aumentara por el envio de %d", poci);
				preciof=descuentof+poci;
				printf("\nel precio total de la compra es: %2.f", preciof);
			}
			if(region==3){
				printf("\nel precio aumentara por el envio de %d", pce);
				preciof=descuentof+pce;
				printf("\nel precio total de la compra es: %2.f", preciof);
			}
		}
		if(a>=mayor && b==0 ){
			mayor=a;
			strcpy(nombreaux,nombre);
			contr=region;
		}
	acumejem1=acumejem1+a;
	acumejem2=acumejem2+b;
	contcli++;
	cantdes=cantdes+descuentot;
	numeroejem=0;
	a=0;
	b=0;
	descuento=0;
	precio=0;
	descuentot=0;
	descuentof=0;
	preciof=0;
	region=0;
	printf("\nhay algun cliente? (s)si o (n)no\n");
	r=tolower(getch());
	system("pause");
	system("cls");
	}
	promdes=cantdes/contcli;
	printf("\nel total de ejemplares fisicos vendidos es de : %d ", acumejem1);
	printf("\nel total de ejemplares digitales vendidos es de: %d", acumejem2);
	printf("\nel promedio de descuento de los clientes es de : %2.f", promdes);
	printf("\nel cliente con mas copias digitales del libro es %s de la region %d", nombreaux, contr);
	
	return 0;
}
