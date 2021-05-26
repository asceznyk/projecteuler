#include <stdio.h>

int fibonacci_sum (int n) {
	if(n <= 0) {
		return 1;
	} else {
		return fibonacci_sum(n-1) + fibonacci_sum(n-2);
	}
} 

int main () {
	int sum = fibonacci_sum(5); //answer should be 13
	printf("%d", sum);
	return 0;
} 
