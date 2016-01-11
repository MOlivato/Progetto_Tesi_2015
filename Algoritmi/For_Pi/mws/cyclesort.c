#include <stdio.h>

int globalcounter=0;

//Funzione che stampa un vettore
void printv(int v[], int n){
	int i;
	
	for(i=0;i<n;i++)
		printf(" %i", v[i]);
	
	printf(" \n");
}

//Funzione che ordina con il minor numero di scritture nel vettore
int cyclesort(int v[], int nmax){
	int i, j, change, temp, temppos;
	
	//Scorro gli elementi nel vettore
	for(i=0; i<nmax; i++){
		temp=v[i];
		
		//Valuto la posizione in cui dovrò inserire l'elemento
		temppos = i;
		for(j=i+1; j<nmax; j++)
			if(temp>v[j])
				temppos++;
		
		//Se l'elemento è già nella posizione ordinata non lo riscrivo e continuo
		if(temppos == i) continue;
		
		//Altrimenti inizio a riposizionare ciclicamente gli elementi nella loro posizione corretta
		while(temppos != i){
			
			//Se ho più elementi con lo stesso valore rimappo la posizione
			while(temp == v[temppos])  temppos++;
			
			//Inserisco l'elemento nella sua posizione
			change = v[temppos];
			v[temppos]=temp;
			temp=change;
			globalcounter++;
			//usleep(100);
					
			//Trovo la mia prossima posizione
			temppos = i;
			for(j=i+1; j<nmax; j++)
				if(temp>v[j])
					temppos++;
		}
		
		//Scrivo nella posizione di arrivo l'elemento salvato in temp
		v[temppos]=temp;
		globalcounter++;
		//usleep(100);
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
	
	printf("Ordino il vettore usando l'amosort...");
	
	cyclesort(v,nmax);
	
	printf("Primo e ultimo numero di v: %i - %i\n",v[0],v[nmax-1]);	
	printf("Il counter globale alla fine è: %i\n",globalcounter);
	//printv(v, nmax);
}

