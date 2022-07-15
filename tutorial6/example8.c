#include <stdio.h>

int main(void) {
	int num;

	for (num = 0; num <= 10; num++) {
		if (num % 2 == 0) {
			printf("%d is even!\n", num);
		}
		else {
			printf("%d is odd!\n", num);
		}
	}

	return 0;
}
