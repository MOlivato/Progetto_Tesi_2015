#include <stdio.h>

int main(void) {
	
	//Numero di iterazioni da eseguire
	int NMAX = 2147483647;
	int a=2;
	int b=7;
	int c=0;
	int i;
	
	printf("Inizio test ciclo... a = %i ; b = %i", a , b);
	
	for(i=0;i<NMAX;i++){
		//Eseguo lo scambio utilizzando la variabile c di supporto
		c = a;
		a = b;
		b = c;
	}
		
	printf("Fine test ciclo... a = %i ; b = %i", a , b);
	
}
