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

//Funzione di ordinamento che usa il quick sort modificato alla base
void nqs_four( int a[], int l, int r){
   int j;
   
  if( l < r ){
		// divide and conquer
		j = partition( a, l, r);
		
		if(j-l == 4)
			foursort(a,l);
		else
			nqs_four( a, l, j-1);
		
		if(r-j+1 == 4)
			foursort(a,j);
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
	generate_vector(v, nmax, intervallo, 0);
		
	//printv(v, nmax);
	
	//ordino il vettore con l'algoritmo da testare
	printf("Ordino il vettore usando l' nqs_four...");
	nqs_four(v,0, nmax-1);
	
	//printv(v, nmax);
	
	return 0;	
}

