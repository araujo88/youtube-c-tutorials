#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int num = 0;
	
	do {
		printf("%d\n", num);
		num++;
	}
	while (num < 1);

	return 0;
}
