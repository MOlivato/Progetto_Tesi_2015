#include <stdio.h>

int globalcounter=0;

//Funzione che stampa un vettore
void printv(int v[], int n){
	int i;
	
	for(i=0;i<n;i++)
		printf(" %i", v[i]);
	
	printf(" \n");
}

int cycle(int v[], int nmax, int spos){
	int j, temp, change, temppos, oldtemppos;
	
	//printv(v,nmax);
	
	//Inizio a ordinare la posizione
	temp=v[spos];
	
	//Valuto la posizione in cui dovrò inserire l'elemento
	temppos = 0;
	oldtemppos = temppos;
	for(j=0; j<nmax; j++)
		if(temp>v[j] && j!=spos)
			temppos++;
			
	//Altrimenti inizio a riposizionare ciclicamente gli elementi nella loro posizione corretta
	while(temppos != spos){
		
		//Inserisco l'elemento nella sua posizione
		if(temp != v[temppos]){
			change = v[temppos];
			v[temppos]=temp;
			temp=change;
			globalcounter++;
		}
			
		//Trovo la mia prossima posizione
		oldtemppos = temppos;
		temppos = 0;
		for(j=0; j<nmax; j++)
			if(temp>v[j] && j!=spos)
				temppos++;
		
		//Se ho più elementi con lo stesso valore rimappo la posizione
		while(temp == v[temppos])
			if(++temppos == oldtemppos)
				return;
		
	}
	
	//Scrivo nella posizione di arrivo l'elemento salvato in temp
	if(temp != v[temppos]){
		v[temppos]=temp;
		globalcounter++;
	}
	//printv(v,nmax);
	//printf("2________________________\n");
}

int ocsort(int v[], int nmax){
	int i;
	
	//Scorro gli elementi nel vettore
	i=0;
	
	while(i<nmax){
		
		//Scorro il vettore finchè c'è un ordinamento
		while(i<nmax-1 && v[i]<=v[i+1]) i++;
		
		//printf("i: %i\n",i+1);
		
		//Se ho raggiunto la fine del vettore termino
		if(i==nmax-1) return;
		
		cycle(v, nmax, i+1);
		//printv(v,nmax);
		i++;
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

int main(int argc, char *argv[]) {
	
	//Recupero il numero di elementi da generare
	int nmax;
	nmax = atoi(argv[1]);
	int intervallo = nmax;
	int v[nmax];
	
	generate_vector(v, nmax, intervallo);
	
	//printv(v, nmax);
	printf("Primo e ultimo numero di v: %i - %i\n",v[0],v[nmax-1]);
	
	printf("Ordino il vettore usando secondamosort...\n");
	
	ocsort(v,nmax);
	
	printf("Primo e ultimo numero di v: %i - %i\n",v[0],v[nmax-1]);	
	printf("Il counter globale alla fine è: %i\n",globalcounter);
	//printv(v, nmax);
}
