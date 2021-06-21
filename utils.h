#include <stdio.h>
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

int reverse_int(int x) {
	int r = 0;

	while(x != 0) {
		r = r * 10;
		r = r + (x % 10);
		x = x / 10;
	}

	return r;
}

int is_palindrome(int x) {
	int r = reverse_int(x);
	if(r == x) {
		return 1;
	}
	return 0;
}

double dmod (double x, double y) {
	return x - (int)(x/y) * y;
}
