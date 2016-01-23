#!/bin/bash

nomepf="cyclesort"
nomesf="ocsort"

dim1="50000"
dim2="100000"
dim3="150000"

#Funzione che stampa i tempi di una compilazione
function prtime {
	numo=`echo $2 | cut -d"O" -f2`
	gcc $2 $1.c -o $1_$numo.x 2>/dev/null
	
	echo "$1 $2 [$dim1]: `{ time ./$1_$numo.x $dim1 ; } 2>&1 | grep real | cut -d"l" -f2`" ;
	echo "$1 $2 [$dim2]: `{ time ./$1_$numo.x $dim2 ; } 2>&1 | grep real | cut -d"l" -f2`" ;
	echo "$1 $2 [$dim3]: `{ time ./$1_$numo.x $dim3 ; } 2>&1 | grep real | cut -d"l" -f2`" ;
}

#recupero la versione del gcc
gccversion=`gcc --version |grep gcc`

echo "Versione del compilatore:"
echo "	$gccversion"

prtime $nomepf 
prtime $nomesf 
echo "................................."
prtime $nomepf -O1
prtime $nomesf -O1
echo "................................."
prtime $nomepf -O2
prtime $nomesf -O2
echo "................................."
prtime $nomepf -O3
prtime $nomesf -O3
