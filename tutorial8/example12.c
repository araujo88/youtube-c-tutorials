#include <stdio.h>

int main(void)
{
	int *pointer = NULL;
	int number = 2;

	pointer = &number;

	printf("pointer address: %p\n", pointer);
	printf("number adress: %p\n", &number);
	printf("pointer dereferencing: %d\n", *pointer);

	return 0;
}
