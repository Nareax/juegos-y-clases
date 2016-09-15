#include <iostream>
#include <time.h>
#include <stdio.h>
#include <windows.h>

void cargar(int vec[30], int x);
void matriz(int mat[15][15], int x);
void imprimirv(int a[30], int v[30], int c[30]);
void imprimirm(int m1[15][15], int m2[15][15]);
void imprimiral(int a[30], int ar[30]);
void imprimirinter(int d[60], int b[30], int c[30]);
void ordenar(int a[30], int aor[30]);
void imprimirde15(int e[30], int b[30], int c[30]);
void imprimirpar(int f[30], int a [30]);
void concatenar(int g[30], int b[30], int  c[30]);
void matriztrans(int m3[15][15], int m1[15][15]);
void matrizasterisco(int m1[15][15]);
void diagonal(int m2[15][15]);

int main(int argc, char** argv) {
	int a[30], b[30], c[30], ar[30], d[60], aor[30], e[30], f[30], g[30];
	int m1[15][15], m2[15][15], m3[15][15];
	srand(time(0));
	
	cargar(a,1);
	cargar(b,2);
	cargar(c,3);
	
	matriz(m1,1);
	matriz(m2,2);
	
	imprimirv(a,b,c);
	imprimirm(m1,m2);
	matriztrans(m3,m1);
	matrizasterisco(m1);
	diagonal(m2);
	imprimiral(a,ar);
	imprimirinter(d,b,c);
	ordenar(a,aor);
	imprimirde15(e,b,c);
	imprimirpar(f,a);
	concatenar(g,b,c);
	
	return 0;
}

void cargar(int vec[30], int x){
	int i, num1,num2;
	for(i=0;i<30;i++){
		if(x==1){
			vec[i]=rand()%900+100;
		}
		else{
			if(x==2){
				vec[i]=(rand()%450+50)*2;
		
			}
			else{
				vec[i]=((rand()%450+50)*2)+1;
	
			}
		}
	}
}

void matriz(int mat[15][15], int x){
	
	int j,k;
	
	for(j=0;j<15;j++){
		for(k=0;k<15;k++){
			
			if(x==1){
				mat[j][k]=rand()%900+100;
			}
			else{
				mat[j][k]=rand()%9000+1000;
			}
		}
	}
	
}

void imprimirv(int a[30], int b[30], int c[30]){
	
	int i;
	printf("\n A\t B\t C\n");
	for(i=0;i<30;i++){
		printf("\n %d \t %d \t %d", a[i], b[i], c[i]);
	}
	system("pause");
	system("cls");
}

void imprimirm(int m1[15][15], int m2[15][15]){
	
	int m,n, cont1=0, cont2=0;
	float porc1,porc2;
	
	printf("\n");
	printf("\t\t\t*******matriz 1******");
	printf("\n");
	
	for(m=0;m<15;m++){
		printf("\n");
		for(n=0;n<15;n++){
			printf(" %d ", m1[m][n]);
		}
	}
	system("pause");
	
	printf("\n");
	printf("\t\t\t*******matriz 2******");
	printf("\n");
	
	for(m=0;m<15;m++){
		printf("\n");
		for(n=0;n<15;n++){
			if(m2[m][n]%2==0){
				cont1++;
			}
			printf("%d ", m2[m][n]);
		}
	}
	porc1=(cont1*100)/(m*n);
	porc2=100-porc1;
	
	printf("\nel porcentage de numeros pares es %f y de impares es %f", porc1, porc2);
	system("pause");
}

void matriztrans(int m3[15][15], int m1[15][15]){
	
	int x1,y1, x2,y2, cont1=0, cont2=0;
	
	for(x1=0;x1<15;x1++){
		for(y1=0;y1<15;y1++){
			m3[x1][y1]=m1[14-cont1][14-cont2];
			cont2++;
		}
		cont1++;
		cont2=0;
	}
	
	printf("\n");
	printf("\t\t\t*******matriz transversa******");
	printf("\n");
	
	for(x1=0;x1<15;x1++){
		printf("\n");
		for(y1=0;y1<15;y1++){
		printf(" %d ", m3[x1][y1]);
		}
	}
	system("pause");
}

void matrizasterisco(int m1[15][15]){
	
	int j,k;

	printf("\n");
	printf("\t\t\t*******matriz par asterisco******");
	printf("\n");
	
	for(j=0;j<15;j++){
		printf("\n ");
		for(k=0;k<15;k++){
			if(m1[j][k]%2==0){
				printf(" *** ");
			}
			else{
				printf(" %d ", m1[j][k]);
			}
		}
	}
	
	system("pause");
}

void diagonal(int m2[15][15]){
	
	int j,k, v;
	
	for(j=0;j<15;j++){
		printf("\n ");
		for(k=0;k<15;k++){
			if(j==k){
				printf("AAAA ");
			}
			else{
				if(15==j+k+1 ){
				printf("BBBB ");
			   }
			   else{
			    v=15/2;
			      if(j==v && k==v){
			   	   printf("WWWW ");
			      }
			      else{
			      	printf("%d ", m2[j][k]);
				  }
			   }
			}
		}
	}
	system("pause");
	system("cls");
}



void imprimiral(int a[30], int ar[30]){
	int i, cont1=0;
	
	for(i=0;i<30;i++){
		ar[i]=a[29-cont1];
		cont1++;
	}
	printf("\n an\t ar");
	
	for(i=0;i<30;i++){
		printf("\n %d\t %d", a[i], ar[i]);
	}
	system("pause");
	system("cls");
}

void imprimirinter(int d[60], int b[30], int c[30]){
	
	int f,i,cont1=0,cont2=1;
	
	f=0;
	for(i=0;i<30;i++){
		d[f]=b[i];
		f++;
		d[f]=c[i];
		f++;
	}
	
	printf("\n d");
	for(f=0;f<60;f++){
		printf("\n %d", d[f]);
		cont1++;
		if(cont1==10){
			system("pause");
			cont1=0;
		}
	}

	system("pause");
	system("cls");
}

void ordenar(int a[30], int aor[30]){
	
	int aux, i,k;
	printf("\n an");
	
	for(i=0;i<30;i++){
		printf("\n %d", a[i]);
	}
	
	for(i=0;i<30;i++){
		for(k=0;k<30-1;k++){
			if(a[k]>a[k+1]){
				aux=a[k];
				a[k]=a[k+1];
				a[k+1]=aux;
			}
		}
	}
	
	printf("\n ordenado");
	for(i=0;i<30;i++){
		printf("\n %d", a[i]);
	}
	system("pause");
	system("cls");
}

void imprimirde15(int e[30], int b[30], int c[30]){
	
	int i,s;
	s=0;
	for(i=0;i<30;i++){
		if(i<15){
			e[s]=b[i+15];
			s++;
		}
		else{
			e[s]=c[i-15];
			s++;
		}
	}
	printf("\n 15b y 15c");
	for(s=0;s<30;s++){
		printf("\n %d ", e[s]);
	}
	
	system("pause");
	system("cls");
}

void imprimirpar(int f[30], int a [30]){
	
	int i,r;
	
	r=0;
	for(i=0;i<30;i++){
		if(a[i]%2==0){
			f[r]=a[i];
			r++;
		}
		else{
			f[r]=0;
			r++;
		}
	}
	
	printf("\n F");
	for(r=0;r<30;r++){
		printf("\n %d", f[r]);
	}
	
	system("pause");
	system("cls");
}

void concatenar(int g[30], int b[30], int  c[30]){
	
	int i, h;
	h=0;
	for(i=0;i<30;i++){
		g[h]=(b[i]*1000)+c[i];
		h++;
	}
	
	printf("\n Concatenado");
	for(h=0;h<30;h++){
		printf("\n %d", g[h]);
	}
	system("pause");
	system("cls");
}

