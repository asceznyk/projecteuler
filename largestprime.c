#include <stdio.h>
#include <stdint.h>
#include "utils.h"

int largest_prime(int n) {
	int x = 2;

	while(n != x) {	
		if(n % x == 0) {	
			n = n / x;
			printf("%d ", n);
			x = 2;
		} else {
			x = x+1;
		}
	}

	return x;
}

int main () {
	//long n = 600851475143;
	int n = 13195;
	int p = largest_prime(n);
	printf("%d ", p);
	return 0;
}
