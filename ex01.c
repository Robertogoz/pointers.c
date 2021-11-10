#include <stdio.h>

int maior(int **a, int **b, int **c) {
	if(**a > **b && **a > **c)
		return *a;
	else if(**b > **a && **b > **c)	
		return *b;
	else
		return *c;
}

void ordenar(int *a, int *b, int *c) {
	int h = maior(&a, &b, &c);
	int i=0;
	for(i=0;i<h;i++) {
		if(i == *a) {
			printf("%d ", *a);
		} if(i == *b) {
			printf("%d ", *b);
		} if(i == *c) {
			printf("%d ", *c);
		}
	}
}

int main(void) {
	int a, b, c;
	a=1;
	b=3;
	c=2;
	ordenar(&a, &b, &c);
}

// expect to print: 1 2 3


