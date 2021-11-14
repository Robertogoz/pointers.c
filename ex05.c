#include <stdio.h>
#include <stdlib.h>

int *aloca_vetor(int n) {
	int *array = NULL;
	array = (int*) malloc(n * sizeof(int));
	
	return array;
}

void le_elementos(int *array, int n) {
	int i;
	
	for(i=0;i<n;i++) {
		scanf("%d", &array[i]);
	}
}

void print_vetor(int *array, int n) {
	int i;
	float media=0;
	
	for(i=0;i<n;i++) {
		printf("v[%d]=%d\n", i, array[i]);
		media+= array[i];
	}
	media /= n;
	printf("Media=%.2f\n", media);
}

int main() {
	int n, *p;   
	 
	scanf("%d", &n);
	
	p = aloca_vetor(n);
	le_elementos(p, n);
	print_vetor(p, n);
	
	return 0;
}
