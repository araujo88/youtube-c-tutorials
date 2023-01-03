// 3! = 3 * 2 * 1 = 6
// 5! = 5 * 4 * 3 * 2 * 1 = 120
// 0! = 1
// 1! = 1

#include <stdio.h>

unsigned int factorial(unsigned int n)
{
	unsigned int i = n - 1;

	if ((n == 1) || (n == 0)) {
		n = 1;
	}
	else {
		while (i > 1) {
			n = n * i;
			i--;
		}
	}

	return n;
}

unsigned int factorial_recursive(unsigned int n)
{
	if ((n == 1) || (n == 0)) {
		return 1;
	}
	else {
		return n * factorial_recursive(n - 1);
	}
}

int main(void)
{
	int i, j;

	//for (j = 0; j < 10000000; j++) {
	for (i = 0; i < 10; i++) {
		printf("%u\n", factorial(i));
		//factorial_recursive(i);
	}
	//}

	return 0;
}
