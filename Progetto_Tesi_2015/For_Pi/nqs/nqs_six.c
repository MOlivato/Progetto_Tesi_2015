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

//Funzione che ordina con il minor numero di confronti un vettore di lunghezza 3
void threesort(int v[], int start){
	int a = start;
	int b = start+1;
	int c = start+2;
	
	//printf("Sono nel trisort e devo ordinare: %i %i %i \n",v[a],v[b],v[c]);

	if(v[a]<v[b]){
		if(v[b]>v[c]){
			if(v[a]<v[c]){
				// ordine va, vc, vb
				swap(v,b,c);
			}else{
				// ordine vc, va, vb
				swap(v,b,c);
				swap(v,a,b);
			}
		}
		// ordine va, vb, vc
	}else{
		if(v[c]<v[b]){
			// ordine vc, vb, va
			swap(v,a,c);
		}else{
			if(v[a]<v[c]){
				// ordine vb, va ,vc
				swap(v,a,b);
			}else{
				// ordine vb, vc, va
				swap(v,a,b);
				swap(v,b,c);
			}
		}
	}
	//printf("Esco dal trisort... \n");
	
}

//Funzione che ordina con il minor numero di confronti un vettore di lunghezza 4
void foursort(int v[], int start){

	int a=start+0;
	int b=start+1;
	int c=start+2;
	int d=start+3;
	
	if(v[a]<v[b]){
		if(v[b]<v[c]){
			if(v[c]>v[d]){
				if(v[b]<v[d]){
					// ordine va, vb, vd, vc
					swap(v,c,d);
				}else{
					if(v[a]<v[d]){
						// ordine va, vd, vb, vc
						swap(v,c,d);
						swap(v,b,c);
					}else{
						//ordine vd, va, vb, vc
						swap(v,c,d);
						swap(v,b,c);
						swap(v,a,b);
					}
				}
			}else{
				// ordine va, vb, vc, vd
				return;
			}
		}else{
			if(v[c]>v[d]){
				if(v[d]<v[a]){
					if(v[a]<v[c]){
						// ordine vd, va, vc, vb
						swap(v,b,d);
						swap(v,a,b);
					}else{
						// ordine vd, vc, va, vb
						swap(v,b,c);
						swap(v,c,d);
						swap(v,a,c);
					}
				}else{
					// ordine va, vd, vc, vb
					swap(v,b,d);
				}
			}else{
				if(v[b]<v[d]){
					if(v[a]<v[c]){
						//ordine va, vc, vb, vd
						swap(v,b,c);
					}else{
						//ordine vc, va, vb, vd
						swap(v,a,c);
						swap(v,b,c);
					}
				}else{
					if(v[a]<v[c]){
						//ordine va, vc, vd, vb
						swap(v,b,c);
						swap(v,c,d);
					}else{
						if(v[a]<v[d]){
							//ordine vc, va, vd, vb
							swap(v,b,c);
							swap(v,a,b);
							swap(v,c,d);
						}else{
							//ordine vc, vd, va, vb
							swap(v,a,c);
							swap(v,b,d);
						}
					}
				}
			
			}
			
		}
	
	}else{
		if(v[a]<v[c]){
			if(v[c]<v[d]){
				//ordine vb, va, vc, vd
				swap(v, a, b);
			}else{
				if(v[a]<v[d]){
					// ordine vb, va, vd, vc
					swap(v, a, b);
					swap(v, c, d);
				}else{
					if(v[b]<v[d]){
						// ordine vb, vd, va, vc
						swap(v,a,b);
						swap(v,b,d);
						swap(v,c,d);
						
					}else{
						// ordine vd, vb, va, vc
						swap(v,a,c);
						swap(v,a,d);
					}
				}
			}
		}else{
			if(v[a]<v[d]){
				if(v[b]<v[c]){
					// ordine vb, vc, va, vd
					swap(v,a,b);
					swap(v,b,c);
				}else{
					// ordine vc, vb, va, vd
					swap(v,a,c); 
				}
			
			}else{
				if(v[b]<v[c]){
					if(v[c]<v[d]){
						// ordine vb, vc, vd, va
						swap(v,a,b);
						swap(v,b,c);
						swap(v,c,d);
					}else{
						if(v[b]<v[d]){
							// ordine vb, vd, vc, va
							swap(v,a,b);
							swap(v,b,d); 
						}else{
							//ordine vd, vb, vc, va
							swap(v,a,d);
						}
					}
				}else{
					if(v[d]<v[c]){
						// ordine vd, vc, vb, va
						swap(v,a,d);
						swap(v,b,c);
					}else{
						if(v[b]<v[d]){
							// ordine vc, vb, vd, va
							swap(v,a,c);
							swap(v,c,d);
						}else{
							// ordine vc, vd, vb, va
							swap(v,b,c);
							swap(v,a,b);
							swap(v,b,d);
						}
					}
				}
			}
		}
	}
}

//Funzione che ordina sei elementi usando il threesort e il foursort
void sixsort(int v[], int start){
	
	//Primo ordino i sei elementi per gruppi da tre
	threesort(v,start);
	threesort(v,start+3);
	
	if(v[start+2]<v[start+3]) return;
	
	//Poi trovo il massimo e il minimo del vettore
	if(v[start]>v[start+3])
		swap(v,start,start+3);
		
	if(v[start+2]>v[start+5])
		swap(v,start+2,start+5);
	
	//Poi ordino gli elementi centrali
	foursort(v,start+1);
}

//Funzione di ordinamento che usa il quick sort modificato alla base
void nqs_six( int a[], int l, int r){
   int j;
   
  if( l < r ){
		// divide and conquer
		j = partition( a, l, r);
		
		if(j-l == 6)
			sixsort(a,l);
		else
			nqs_six( a, l, j-1);
		
		if(r-j+1 == 6)
			sixsort(a,j);
		else
			nqs_six( a, j+1, r);
	
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
	generate_vector(v, nmax, intervallo, 0);
		
	//printv(v, nmax);
	
	//ordino il vettore con l'algoritmo da testare
	printf("Ordino il vettore usando l' nqs_six...");
	nqs_six(v,0, nmax-1);
		
	//printv(v, nmax);
	
	return 0;	
}

