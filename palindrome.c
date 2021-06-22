#include <stdio.h>
#include <stdint.h>
#include "utils.h"

int is_palindrome(int x) {
	int r = reverse_int(x);
	if(r == x) {
		return 1;
	}
	return 0;
}

int largest_palindrome() {
	int p = 0;
	int lp = 0;
	for (int i = 0; i < 999; i++) {
		for (int j = 0; j < 999; j++) {
			p = i * j;
			if(is_palindrome(p))
				if(p > lp)
					lp = p;
		}
	}

	return lp;
}

int main () {	
	int lp = largest_palindrome();	
	printf("%d\n", lp);

	return 0;
}
