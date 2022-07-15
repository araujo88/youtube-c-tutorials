#include <stdio.h>

int main(void)
{
	char *string = "pointers are fun!!!\n";

	printf(string);
	printf("Address in memory of string: %p\n", string);

	return 0;
}
