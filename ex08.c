#include <stdio.h>
#include <stdlib.h>

int **aloca_matriz(int linha, int coluna) {
	int **m = NULL, i;
	
	m = (int**) malloc(linha * sizeof(int*));
	
	for(i=0;i<linha;i++) {
		m[i] = (int*) malloc(coluna * sizeof(int));
	}
	
	return m;
}

int main(void) {
		int **p;
	int m, n, i, j;
	scanf("%d %d",&m, &n);
	p = aloca_matriz(m, n);
	
	for (i = 0; i < m; i++) {
	   	for (j = 0; j < n; j++) {
	       	p[i][j] = (i*m) + (j+1);
	   	}
	}
	for (i = 0; i < m; i++) {
	   	for (j = 0; j < n; j++) {
	   	    printf("%d ", p[i][j]);
	  		}
	   	printf("\n");
	}
	return 0;
}
