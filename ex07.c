#include <stdio.h>
#include <stdlib.h>

int **matriz_irregular(int n, int *vetor) {
	int **m = NULL, i, j;
	
	m = (int**) malloc(n * sizeof(int*));
	
	for(i=0;i<n;i++) {
		m[i] = (int*) malloc(vetor[i] * sizeof(int));
	}
	
	for (i=0; i<n; i++){
		for (j=0; j<vetor[i]; j++){
			m[i][j] = vetor[i];
		}
	}
	
	return m;
}

int main() {
	
	int **m, n, i, j;
	scanf("%d", &n);
	
	int vetor[n];
	for (i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
	m = matriz_irregular(n, vetor);
	
	for (i=0; i<n; i++){
		for (j=0; j<vetor[i]; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
