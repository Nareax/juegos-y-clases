#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(int argc, char** argv) {
	int a, b, c, contr=0, contn=0;
	char r,r2, nombre[20];
	float peso, diametro, porcent;
	
	printf("\nBuenas, la cosecha produjo alguna naranja (s)si o (n)no\n");
    r=getch();
    
    while(r=='s' || r=='S'){
    	printf("\nporfavor digame como desea llamar a esta naranja, \nsi es que estoy loco y no tengo amigos\n");
    	fflush(stdin);
    	gets(nombre);
    	printf("\ndigame cuanto peso la naranja porfavor\n");
    	scanf("\n%f", &peso);
    	printf("\nporfavor podria decirme de cuanto es su diametro\n");
    	scanf("\n%f", &diametro);
    	
    	if(peso>450 && (diametro<=12 && diametro>=9)){
    		printf("felicidades la naranja %s es de tipo premium, vivan los VIPS\n", nombre);
		}
		if((peso>=300 && peso<=450)&& (diametro<=11 && diametro>=8)){
    		printf("felicidades la naranja %s es de tipo extra, vivan la vitamina C\n", nombre);
		}
		if(peso<300 && (diametro<=9 && diametro>=7)){
    		printf("felicidades la naranja %s es de tipo natural, vivan Gaia\n", nombre);
		}
		if(!(peso>450 && (diametro<=12 && diametro>=9)) && !((peso>=300 && peso<=450) && (diametro<=11 && diametro>=8)) && !(peso<300 && (diametro<=9 && diametro>=7))){
			printf("\nlo siento, pero la naranja  %s ha sido rechasada\n", nombre);
			contr++;
		}
		contn++;
		printf("%d",contr);
		printf("%d", contn);
    	printf("\nhay alguna otra naranja (s)si o (n)no\n");
    	r2=getch();
    	if(r2=='n' || r2=='N'){
    		printf("\nfue un placer hacer negocios contigo\n");
    		break;
		}
		peso=0;
		diametro=0;
	}
	
	porcent=(contr*100)/contn;
	
	printf("\nel porcentaje de naranjas rechazadas es de %f porciento\n", porcent );
	
	return 0;
}
