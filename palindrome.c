#include <stdio.h>
#include <stdint.h>
#include "utils.h"

int main () {
	int x = 90109;
	int r = reverse_int(x);
	int p = is_palindrome(x);
	printf("%d\n", p);
	printf("%d\n", r);

	return 0;
}
