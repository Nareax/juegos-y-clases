#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int vec[30], vec2[30],t, i,j, aux;
	
	srand(time(0));
	t=0;
	for(i=0;i<30;i++){
		vec[i]=rand()%100+100;
		vec2[t]=vec[i];
		t++;
	}
	
	for(t=0;t<30;t++){
		for(j=0;j<30-1;j++){
			if(vec[j]>vec[j+1]){
				aux=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=aux;
			}
		}
	}
	
	printf("\n vecn  veco");
	for(t=0;t<30;t++){
		printf("\n %d  %d ", vec2[t], vec[t]);
	}
	
	
	return 0;
}
