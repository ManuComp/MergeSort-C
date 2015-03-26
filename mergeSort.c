#include <stdio.h>
#include "mergeSort.h"
#include <stdlib.h>

void merge(int *A, int a, int * B, int b, int * R){
	int i = 0, j = 0, k = 0;
	while(i<a && j<b){
		if(A[i]<B[j])
			R[k++] = A[i++];
		else
			R[k++] = B[j++];
	}
	while(i<a)
		R[k++] = A[i++];
	while(j<b)
		R[k++] = B[j++];
}


void msort(int * L, int n){
	if(n < 2)
		return;
	int a = n/2;//piso
	int b = n - n/2;//intecho
	int * A;
	int * B;
	int j=0,i=0;
	A = malloc(sizeof(int)*a);
	B = malloc(sizeof(int)*b);
	for(i ; i < a ; i++){
		A[i] = L[i];
	}
	for(j ; j < b ; j++){
		B[j] = L[j+a];
	}
	msort(A,a);
	msort(B,b);
	merge(A,a,B,b,L);
}