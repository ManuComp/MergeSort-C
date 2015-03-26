#include <stdlib.h>
#include <stdio.h>
#include "mergeSort.h"

int main(void){
	int A [] = {5,3,2,12};
	int tam = 4;
	int i = 0;
	int res = 0;
	for(i ; i<tam ; i++){
		res = A[i];
		printf("%d", res);
	}
	return 0;
}