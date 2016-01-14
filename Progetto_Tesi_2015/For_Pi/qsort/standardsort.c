#include <stdio.h>

int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

//Creo un vettore riempito di numeri casuali
void generate_vector(int v[], int nmax, int intervallo){
	int i;
	
	//Inizializzo il randomizzatore
	srand(time(NULL));
	
	//Inizializzo il vettore con numeri casuali	
	for(i=0;i<nmax;i++)
		v[i]=rand() % intervallo;
		
}

//Funzione che stampa un vettore
void printv(int v[], int n){
	
	int i;
	
	for(i=0;i<n;i++)
		printf(" %i", v[i]);
	
	printf(" \n");
}

int main(int argc, char *argv[]) {
	
	//Recupero il numero di elementi da generare
	int nmax;
	nmax = atoi(argv[1]);
	int intervallo = nmax;
	int v[nmax];
	
	generate_vector(v, nmax, intervallo);
	
	//printv(v, nmax);
	
	printf("Ordino il vettore usando il quick sort...");
	
	qsort( v, nmax, sizeof(int), compare );
	
	//printv(v, nmax);	
}

