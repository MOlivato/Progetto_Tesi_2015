#include <stdio.h>

//Funzione che scambia due elementi di un vettore
void swap(int v[], int a, int b){
	int c = v[a];
	v[a] = v[b];
	v[b] = c;
}

//Funzione che inserisce un valore all'interno del vettore 
// shiftando gli altri elementi
void swapshift(int v[], int a, int b){
	int temp=v[a];
	int i;
	if(a<b)		
		for(i=a;i<b+1;i++)
			v[i] = v[i+1];
	else
		for(i=a;i>b;i--)
			v[i] = v[i-1];
	v[b] = temp;
}

//Funzione di ordinamento che usa l'insertion sort
// modificato con complessità nlogn
void specialinssort(int v[], int nmax){
	
	int i, left,right;
		
	for(i=1; i<nmax; i++){	
		right=i;
		left=0;
						
		if(v[i]<v[i-1]){
			while(left<right){		
				if(v[(left+right)/2]<v[i])
					left=(left+right)/2+1;
				else
					right=(left+right)/2;
			}
			swapshift(v, i, left);
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
	
	generate_vector(v, nmax, intervallo);
	
	//printv(v, nmax);
	
	printf("Ordino il vettore usando lo special insertion sort...");
	specialinssort(v,nmax);
	
	//printv(v, nmax);	
}

