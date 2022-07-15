#include <stdio.h>

// Shows different size in bytes of C variable types
int main(void) {
	int a;
	short int b;
	long int c;
	long long d;
	float e;
	double f;
	char g;

	/* This is a comment */
	printf("Size of (int): %ld\n", sizeof(a));
	printf("Size of (short int): %ld\n", sizeof(b));
	printf("Size of (long int): %ld\n", sizeof(c));
	printf("Size of (long long int): %ld\n", sizeof(d));
	printf("Size of (float): %ld\n", sizeof(e));
	printf("Size of (double): %ld\n", sizeof(f));
	printf("Size of (char): %ld\n", sizeof(g));
	
	unsigned int num1;
	unsigned long int num2;
	unsigned short int num3;
	unsigned long long int num4;

	num1 = 1;
	num2 = 2;
	num3 = 3;
	num4 = 4;

	printf("num1 = %u\n", num1);
	printf("num2 = %lu\n", num2);
	printf("num3 = %hu\n", num3);
	printf("num4 = %llu\n", num4);
	
	printf("Size of (unsigned int): %ld\n", sizeof(num1));
	printf("Size of (unsigned long int): %ld\n", sizeof(num2));
	printf("Size of (unsigned short int): %ld\n", sizeof(num3));
	printf("Size of (unsigned long long int): %ld\n", sizeof(num4));

	return 0;
}
