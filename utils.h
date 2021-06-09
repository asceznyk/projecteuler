#include <math.h>

int factorial (int n) {
	if(n <= 0) 
		return 1;
	else
		return n * factorial(n-1);
}

int check_prime (int n) {
	int a = 1;
	while(a <= n) {
		if(a != n && a != 1)
			if(n % a == 0)
				return 0;

		a = a + 1;
	}

	return 1;
}

double dmod(double x, double y) {
	return x - (int)(x/y) * y;
}
