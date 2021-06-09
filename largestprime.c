#include <stdio.h>
#include <stdint.h>
#include "utils.h"

double largest_prime(double n) {
	double x = 2;

	while(n != x) {	
		if(dmod(n, x) == 0) {	
			n = n / x;	
			x = 2;
		} else {
			x = x+1;
		}
	}

	return x;
}

int main () {
	double n = 600851475143;
	double p = largest_prime(n);
	printf("%f ", p);
	return 0;
}
