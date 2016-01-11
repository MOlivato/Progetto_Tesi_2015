#include <stdio.h>

//Funzione che stampa un vettore
void printv(int v[], int n){
	
	int i;
	
	for(i=0;i<n;i++)
		printf(" %i", v[i]);
	
	printf(" \n");
}

//Funzione che scambia due elementi di un vettore
void swap(int v[], int a, int b){
	int c = v[a];
	v[a] = v[b];
	v[b] = c;
	//printf(" a: %i, b: %i \n",a,b);
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

//Copio un vettore v all'interno di un altro vettore W
void copyv(int v[], int w[], int nmax){
	int i=0;
	
	for(i=0;i<nmax;i++)
		w[i]=v[i];
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

//Testo la correttezza dell'ordinamento nel vettore appena ordinato
int testsort(int v[], int w[], int nmax){
	int i=0;
	
	for(i=0;i<nmax;i++)
		if(v[i] != w[i])
			return 1;
					
	return 0;
}

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

//Chiavi per le combinazioni lunghe 4
int chiavi[51][2] = {
	{1,26},{2,10},{3,4},{-1,-1},{5,0},{6,7},{-2,-2},{8,9},{-3,-3},{-4,-4},{11,20}
	,{12,15},{13,14},{-5,-5},{-6,-6},{16,17},{-7,-7},{18,19},{-8,-8},{-9,-9},{21,25}
	,{0,22},{23,24},{-10,-10},{-11,-11},{-12,-12},{27,43},{28,34},{29,30},{-13,-13},{31,0}
	,{32,33},{-14,-14},{-15,-15},{35,40},{36,39},{37,38},{-16,-16},{-17,-17},{-18,-18},{41,42}
	,{-19,-19},{-20,-20},{44,50},{0,45},{46,49},{47,48},{-21,-21},{-22,-22},{-23,-23},{-24,-24}};

//Cicli per le combinazioni lunghe 4
int cicli[24][7] = 
	{{0,3,0,1,2,1,-1},
	 {0,3,1,2,0,-1},
	 {0,3,2,0,-1},
	 {0,2,0,-1},
	 {0,3,0,-1},
	 {0,3,1,0,-1},
	 {0,2,3,0,-1},
	 {0,2,3,1,0,-1},
	 {0,1,0,2,3,2,-1},
	 {0,3,2,1,0,-1},
	 {0,2,1,0,-1},
	 {0,1,0,-1},
	 {0,2,1,3,0,-1},
	 {0,1,3,0,-1},
	 {1,3,1,-1},
	 {0,2,0,1,3,1,-1},
	 {0,1,3,2,0,-1},
	 {0,1,2,0,-1},
	 {1,3,2,1,-1},
	 {1,2,1,-1},
	 {0,1,2,3,0,-1},
	 {1,2,3,1,-1},
	 {2,3,2,-1},
	 {-1} };
	 
//Funzione che recupera la chiave della combinazione e il ciclo
// da effettuare per ordinarla
int getkey(int v[], int start){
	int lvett=4;
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
	int lvett = 4;
	
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
		
		if(j-l == 4)
			sortkc(a,l, getkey(a,l));
		else
			nqs_four( a, l, j-1);
		
		if(r-j+1 == 4)
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

int main(void) {
	
	int nmax = 200;
	int intervallo = nmax;
	int v[nmax];
	int w[nmax];
	int ripetizioni = 500;
	
	printf("Testo la correttezza dell'algoritmo di sort...\n");
	
	int i;
	for(i=0;i<ripetizioni;i++){
		//Genero il vettore disordinato
		generate_vector(v, nmax, intervallo, 0);
		
		//Copio il vettore v nel vettore w
		copyv(v,w,nmax);
		
		//Ordino il vettore copia con un algoritmo corretto
		selectionsort(w,nmax);
		
		//printv(v, nmax);
		
		//ordino il vettore con l'algoritmo da testare
		nqs_four(v, 0, nmax-1);
		
		//printv(v, nmax);
		
		//Testo l'algoritmo di sort
		if(testsort(v,w,nmax)>0){
			printf("L'algoritmo di sort non è corretto!!!\n");
			printv(v, nmax);
			return 0;
		}
	}
	
	printf("L'algoritmo di sort è corretto!!!\n");
	
	return 0;	
}

