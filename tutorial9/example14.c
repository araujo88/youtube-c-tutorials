#include <stdio.h>

int main(void)
{
	int array[5];
	int i;

	// array pointer: [1]->[2][3][4][5]

	for (i = 0; i < 5; i++) {
		array[i] = i + 1;
	}

	for (i = 0; i < 5; i++) {
		printf("array[%d]: %d\n", i, *array);
		*array += 1;
	}
	
	return 0;
}
