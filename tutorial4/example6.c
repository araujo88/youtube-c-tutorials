#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a number: \n");
	scanf("%d", &num);
	printf("You entered the number: %d\n", num);

	// operators: == (equal), <= (less than or equal), >= (greater or equal)
	// > (greater than), < (less than), != (different than,
	// && (and), || (or), ! (not)
	
	if (num == 1) {
		printf("Num is equal to 1\n");
	}
	else if (num == 2) {
		printf("Num is equal to 2\n");
	}
	else if (num == 3) {
		printf("Num is equal to 3\n");
	}
	else {
		printf("Num is neither 3, 2 or 1\n");
	}

	return 0;
}
