#include <stdio.h>

int main(void) {
	int num = 0;

	do {
		printf("%d\n", num++);
	} while(num < 1);

	return 0;
}
