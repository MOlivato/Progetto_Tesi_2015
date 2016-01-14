#include <stdio.h>

int main(void) {
	
	int NMAX = 2147483647;
	int a=2;
	int b=7;
	int c=0;
	int i;
	
	printf("Inizio test ciclo... a = %i ; b = %i", a , b);
	
	for(i=0;i<NMAX;i++){
		
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
		
	printf("Fine test ciclo... a = %i ; b = %i", a , b);
	
}
