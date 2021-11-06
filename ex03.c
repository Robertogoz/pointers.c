#include <stdio.h>

void decodificar(int *v, int n, char *s) {
	int i, j=0;
	char S[62];
	for(i=0;i<n;i++) {
		S[i] = s[v[j]];
		if(i > 0) {
			v[j] += v[j-1];
			S[i] = s[v[j]];
		}
		j++;
	}
	S[i] = '\0';
	printf("%s", S); 
}

int main() {		
	char frase[62] = "the quick brown fox jumps over the lazy dog";
	int n = 20;
	int v[20] = {24, -1, -11, -1, -3, -5, 3, 33, -15, -23, 35, -1, 0, -20, -4, -9, -2, 21, 8, -15};
	decodificar(v, n, frase);
}

//expect to print : spork i shall return
