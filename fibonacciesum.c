#include <stdio.h>

int fibonacci_sum (int bound) {
	int n = 1;
	int p = 0;
	int t = 0;

	int sumeven = 0;
	while(n < bound) { 
		t = n;
		n = n+p;	
		p = t;

		if (n % 2 == 0)
			sumeven = sumeven + n;
	 }

	return sumeven;
} 

int main () {
	int sum = fibonacci_sum(4000000); 
	printf("%d", sum);
	return 0;
} 


