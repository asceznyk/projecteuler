#include <stdio.h>

int fibonacci_sum (int bound) {
	int n = 1;
	int p = 0;
	int t = 0;	
	while(n < bound) {
		t = n;
		n = n+p;	
		p = t;
	}

	return n;
} 

int main () {
	int sum = fibonacci_sum(15); //answer should be 13
	printf("%d", sum);
	return 0;
} 
