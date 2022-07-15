#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int num = 0;

	while (true) {
		if (num > 10) {
			break;
		}
		printf("%d\n", num);
		num++;
	}

	return 0;
}
