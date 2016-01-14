#include <stdio.h>

int globalcounter=0;

//Ordino il vettore con l'algoritmo selection sort
void selectionsort(int v[],int nmax){
    int i,j,t,min;
    
    for (i=0; i<nmax; i++) {
		
        min = i;
        
        for (j=i+1; j<nmax; j++) {
            if (v[min]> v[j]) {
                min = j;
            }
        }
        
        if (min != i) {
			t = v[i];
			v[i] = v[min];
			v[min] = t;        
		}
		
	}
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
	int w[nmax];
	
	//genero il vettore v
	generate_vector(v, nmax, intervallo);
	
	printv(v, nmax);
	printf("Primo e ultimo numero di v: %i - %i\n",v[0],v[nmax-1]);
	
	printf("Ordino il vettore usando il selectionsort...");
	
	selectionsort(v,nmax);
	
	printf("Primo e ultimo numero di v: %i - %i\n",v[0],v[nmax-1]);
	printf("Il counter globale alla fine è: %i\n",globalcounter);
	printv(v, nmax);
}
