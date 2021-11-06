#include <stdio.h>
#include <string.h>

char vowels[10] = "aeiouAEIOU";

char* achar(char *p, char *frase) {
	int i, j, b=0;
	for(i=*p;frase[i] !='\0';i++) {
		for(j=0;j<strlen(vowels);j++) {
			if(frase[i] == vowels[j]) {
				p = &frase[i];
				b=1;
				break;
			} 
		}
		if(b==0) {
			p = &frase[i];
		} else {
			break;
		}
	}
	return p;
}

int main() {
	int n = 7;
	void* p = &n;
	char frase[62] = "the quick brown fox jumps over the lazy dog";
	p = achar(p, frase);
	printf("%c", *(char*) p);
}

//expect: o
