#include <stdio.h>

double* max(double v[],int n) {
	int i, x=0;
	double y;
	for(i=0;i<n;i++) {
		if(v[i] > y) {
			y = v[i];
			x = i;
		}
	}
	return v+x;
}

int main() {
	double v[5]={2.6, 13.2, 1.65, 0.99, 11.9};
	double *p_max;
	p_max = max (v, 5);
	printf("%.2lf\n", *p_max);
}

// expect to print 13.20
