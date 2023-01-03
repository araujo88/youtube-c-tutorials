#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, unsigned int size)
{
	int i;

	printf("[");
	for (i = 0; i < size; i++) {
		printf("%d ", *array);
		array++;
	}
	printf("]\n");
	array = array - size;
}

void fill_array(int *array, unsigned int size)
{
	int i;
	
	for (i = 0; i < size; i++) {
		printf("Type the element %d of the array: \n", i);
		scanf("%d", array);
		array++;
	}

	array = array - size;
}

void freem(void **ptr)
{
	if (*ptr != NULL) {
		free(*ptr);
		*ptr = NULL;
	}
}

int main(void)
{
	int *array;
	unsigned int size;

	printf("Enter the array size: \n");
	scanf("%u", &size);

	array = (int *)calloc(size, sizeof(int));

	fill_array(array, size);
	print_array(array, size);

	array = (int *)realloc(array, (size - 1)*sizeof(int));

	print_array(array, size - 1);

	freem((void **)&array);
	freem((void **)&array);

	return 0;
}
