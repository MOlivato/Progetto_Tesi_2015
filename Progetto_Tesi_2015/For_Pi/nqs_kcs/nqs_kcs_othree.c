#include <stdio.h>

int chiavi[11][2] = {{1,6},{2,3},{-1,-1},{4,5},{-2,-2},{-3,-3},{7,10},
					 {8,9},{-4,-4},{-5,-5},{-6,-6}};

int cicli[6][5] = {{0,2,0,-1}, {0,2,1,0,-1}, {0,1,0,-1}, {0,1,2,0,-1}, 
				   {1,2,1,-1}, {-1} };

int NMAXK = 3;

//Funzione che stampa un vettore
void printv(int v[], int n){
	int i;
	
	for(i=0;i<n;i++)
		printf(" %i", v[i]);
	
	printf("\n");
}

//Funzione che recupera la chiave della combinazione e il ciclo
// da effettuare per ordinarla
int getkey(int v[], int start){
	int lvett=NMAXK;
	int btf;
	int i,j;
	int chiave=0;
	
	for(i=1;i<lvett;i++){
		for(j=0;j<lvett-i;j++){
			
			//Trovo il bit della chiave da cercare
			btf = v[start+j]<=v[start+j+i]?1:0;
			//printf("btf: %i\n",btf);
			
			//Recupero il puntatore interno al vettore al prossimo bit
			chiave = chiavi[chiave][btf];
			//printf("chiave: %i\n",chiave);
			
			//Se il puntatore punta ad un valore negativo allora lo ritorno
			if(chiavi[chiave][0] < 0) return (chiavi[chiave][0] * -1)-1;
		}
	}
	
	return -1;
}

//Ordino la combinazione usando i cicli
void sortkc(int v[],int start, int chiave){
	int i, startpos, temp, val;
	int lvett = NMAXK;
	
	if(cicli[chiave][0]==-1) return;
	
	startpos = cicli[chiave][0];
	val = v[start + startpos];
	
	for(i=1;cicli[chiave][i]!=-1;i++){
		
		//Se sto ricominciando un ciclo
		if(startpos ==-1){
			startpos=cicli[chiave][i];
			val = v[start + startpos];
		}
		
		//Se sono dentro un ciclo normale
		if(startpos != cicli[chiave][i]){
			temp=v[start + cicli[chiave][i]];
			v[start + cicli[chiave][i]]=val;
			val=temp;
			startpos=cicli[chiave][i];
		}else{
			//Ho finito il ciclo
			v[start + cicli[chiave][i]]=val;
			startpos=-1;
		}
	}

}

//Funzione di ordinamento che usa il quick sort modificato alla base
void nqs_four( int a[], int l, int r){
   int j;
   
  if( l < r ){
		
		// divide and conquer
		j = partition( a, l, r);
		
		if(j-l == NMAXK)
			sortkc(a,l, getkey(a,l));
		else
			nqs_four( a, l, j-1);
		
		if(r-j+1 == NMAXK)
			sortkc(a,j, getkey(a,j));
		else
			nqs_four( a, j+1, r);
	
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
void generate_vector(int v[], int nmax, int intervallo, int reset){
	int i;
	
	//Inizializzo il randomizzatore
	if(reset)
		srand(time(NULL));
	
	//Inizializzo il vettore con numeri casuali	
	for(i=0;i<nmax;i++)
		v[i]=rand() % intervallo;
		
}

int main(int argc, char *argv[]) {
	
	//Recupero il numero di elementi da generare
	int nmax;
	nmax = atoi(argv[1]);
	int intervallo = nmax;
	int v[nmax];
	
	//Genero il vettore disordinato
	generate_vector(v, nmax, intervallo, 1);
		
	//printv(v, nmax);
	
	//ordino il vettore con l'algoritmo da testare
	printf("Ordino il vettore...\n");
	nqs_four(v,0, nmax-1);
	
	printf("Il primo e l'ultimo elementi del vettore sono:[%i, %i]\n",v[0],v[nmax-1]);
	//printv(v, nmax);
	
	return 0;	
}
