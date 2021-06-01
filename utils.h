#include <math.h>

int factorial (int n) {
	if(n <= 0) 
		return 1;
	else
		return n * factorial(n-1);
}

int check_prime (int n) {
	int f = floor((factorial(n) % (n+1)) / n) * (n - 1) + 2;
	return f;
}
