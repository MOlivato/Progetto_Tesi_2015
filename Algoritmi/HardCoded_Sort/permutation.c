#include <stdio.h>
#include <math.h>

int globalcounter=0;
FILE *f;

//Funzione che stampa un vettore
void printv(int v[], int n){
	int i;
	
	for(i=0;i<n;i++)
		printf(" %i", v[i]);
	
	printf("\n");
}

//Funzione che copia un vettore v in w
void copyv(int v[], int w[], int nmax){
	int i;
	
	for(i=0;i<nmax;i++)
		w[i]=v[i];
}

//Funzione che scambia due elementi di un vettore
void swap(int v[], int a, int b){
	int c = v[a];
	v[a] = v[b];
	v[b] = c;
}

//Funzione che esegue il setup del vettore con elementi da 0 a nmax-1
void setup_vector(int v[], int nmax){
	int i;
	
	for(i=0;i<nmax;i++)
		v[i]=i;
}

//Stampo il vettore sul file
void printvf(int v[], int nmax, int back){
	int i=0;
	
	for(i=0;i<nmax;i++)
		fprintf(f, "%i ", v[i]);
	
	if(back) fprintf(f, "\n");
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
		
		fprintf(f, " %i",i);
		
		//Altrimenti inizio a riposizionare ciclicamente gli elementi nella loro posizione corretta
		while(temppos != i){
			fprintf(f, " %i",temppos);
			//Se ho più elementi con lo stesso valore rimappo la posizione
			while(temp == v[temppos])  temppos++;
			
			//Inserisco l'elemento nella sua posizione
			change = v[temppos];
			v[temppos]=temp;
			temp=change;
			//globalcounter++;
			//usleep(100);
					
			//Trovo la mia prossima posizione
			temppos = i;
			for(j=i+1; j<nmax; j++)
				if(temp>v[j])
					temppos++;
		}
		
		//Scrivo nella posizione di arrivo l'elemento salvato in temp
		v[temppos]=temp;
		fprintf(f, " %i",temppos);
		//globalcounter++;
		//usleep(100);
	}
	
	fprintf(f, "\n");

}

//Trasformo un vettore di binari in numero intero
int binvtoint(int v[], int nmax){
	int i, j, temp=1;
	
	for(i=nmax-1;i>=0;i--)
		if(v[i]==1)
			temp += pow(2,nmax-1-i);
	
	return temp;
}

//Funzione che tenta di enumerare la combinazione
void enum_combo(int v[], int nmax){
	int i,j;
	int c[nmax*(nmax-1)/2];
	int n=0;
	
	for(i=0;i<nmax;i++)
		for(j=i+1;j<nmax;j++){
			fprintf(f, "%i ", (v[i]<v[j]?1:0));
			c[n]=(v[i]<v[j]?1:0);
			n++;
		}
	
	
	fprintf(f, " : %i : ",binvtoint(c,n));
}

//Funzione che tenta di enumerare la combinazione
void enum_combo2(int v[], int nmax){
	int i,j;
	
	int c[nmax*(nmax-1)/2];
	
	int n=0;
	
	for(i=1;i<nmax;i++)
		for(j=0;j<nmax-i;j++){
			
			fprintf(f, "%i ", (v[j]<=v[j+i]?1:0));
			
			c[n]=(v[j]<=v[j+i]?1:0);
			
			n++;
		}
	
	
	fprintf(f, " : %i : ",binvtoint(c,n));
}

//Funzione che genera tutte le permutazioni di un vettore di interi
void permute(int v[], int l, int r, int nmax){
	int i;
	int temp[nmax];
	
	if(l == r){
		enum_combo2(v, nmax);
		printvf(v, nmax, 0);
		
		//Copio il vettore in quello temporaneo
		copyv(v, temp, nmax);
		
		fprintf(f, " : ");
		
		//Stampo i cicli trovati dal cyclesort
		cyclesort(temp, nmax);
		
	}else{
		
		for(i=l;i<=r;i++){
			swap(v, l, i);
			permute(v, l+1, r, nmax);
			swap(v, l, i);
		}
	}
}

int main(int argc, char *argv[]) {
	
	//Recupero il numero di elementi da generare
	int nmax;
	nmax = atoi(argv[1]);
	int intervallo = nmax;
	int v[nmax];
	
	f = fopen("file.txt", "w");
	if(f == NULL){
		printf("Error opening file!\n");
		return(1);
	}
		
	setup_vector(v,nmax);
	//printv(v, nmax);
	permute(v,0,nmax-1,nmax);
	
	fclose(f);
}
