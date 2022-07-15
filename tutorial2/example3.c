#include <stdio.h>
#include <stdbool.h>

int main() {
	int num;
	num = 10;
	float pi = 3.1415;
	short int a, b, c;
	a = 1 + 1;
	b = 2 - 2;
	c = 3 % 1;
	long int longInt = 100;
	long long longLongInt = 10*10;
	double threehalfs = 3. / 2.;
	char yes = 'y';
	char *string1 = "Leonardo";
	char string2[] = "C programming";
	bool isTrue = true;
	
	printf("Num: %d\n", num);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("Pi = %.4f\n", pi);
	printf("longInt: %ld\n", longInt);
	printf("longLongInt: %lld\n", longLongInt);
	printf("Three halfs: %.1lf\n", threehalfs);
	printf("yes: %c\n", yes);
	printf("string1: %s\n", string1);
	printf("string2: %s\n", string2);
	printf("isTrue: %d\n", isTrue);	

	return 0;
}
