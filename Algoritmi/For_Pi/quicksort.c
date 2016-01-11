#include <stdio.h>

//Funzione di ordinamento che usa il quick sort
void quicksort( int a[], int l, int r){
   int j;

   if( l < r ){
	   // divide and conquer
       j = partition( a, l, r);
       quicksort( a, l, j-1);
       quicksort( a, j+1, r);
   }
	
}

int partition( int data[], int first, int last) {
	int pivot = data[first];
	int left = first;
	int right = last;
	int t;
	
	while (left < right){
		// Find an element bigger than the pivot from the left
		while (data[left] <= pivot && left < right) left++;
		// Find an element smaller than the pivot from the right
		while (data[right] > pivot) right--;
		// Swap the two elements found
		if(left < right){
			t = data[left];
			data[left] = data[right];
			data[right] = t;
		}
	}

	// move the pivot element to the middle
	t = data[first];
	data[first] = data[right];
	data[right] = t;
	
	return right;
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
	quicksort(v,0,nmax-1);
	
	//printv(v, nmax);	
}

