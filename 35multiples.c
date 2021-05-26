#include <stdio.h>

int multiple_sum(int a, int b, int terms) {
	int sum = 0;
	for(int i = 0; i < terms; ++i) {
		if(i % a == 0 || i % b == 0) {
			sum = sum + i;
		}
	}

	return sum;
}

int main () {
	int sum = multiple_sum(3, 5, 1000);
	printf("sum of multiples of 3 and 5 below 1000: ");
	printf("%d", sum);
	return 0;
}
