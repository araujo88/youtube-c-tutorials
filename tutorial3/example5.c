#include <stdio.h>
#include <limits.h>

// printfs the maximum and minum values of variable types
int main(void) {
	printf("SHRT_MIN: %hd\n", SHRT_MIN);
	printf("SHRT_MAX: %hd\n", SHRT_MAX);
	printf("INT_MIN: %d\n", INT_MIN);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("LONG_MIN: %ld\n", LONG_MIN);
	printf("LONG_MAX: %ld\n", LONG_MAX);
	printf("USHRT_MAX: %hu\n", USHRT_MAX);
	printf("UINT_MAX: %u\n", UINT_MAX);
	printf("ULONG_MAX: %lu\n", ULONG_MAX);

	return 0;
}
