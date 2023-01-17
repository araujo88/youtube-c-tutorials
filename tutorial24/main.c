#include <stdio.h>
#include <stdlib.h>

#define INT 1
#define FLOAT 2
#define CHAR 3

#define SIZE 4096

typedef union {
	int i;
	float f;
	char s[SIZE];
} number;

number add_num(number a, number b, unsigned int TYPE)
{
	number r;

	if (TYPE == INT) {
		r.i = a.i + b.i;
	}
	else if (TYPE == FLOAT) {
		r.f = a.f + b.f;
	}
	else if (TYPE == CHAR) {
		float aux = atof(a.s) + atof(b.s);
		snprintf(r.s, SIZE, "%f", aux);
	}
	else {
		fprintf(stderr, "An invalid argument was provided\n");
		exit(EXIT_FAILURE);
	}
	return r;
}

int main(int argc, char *argv[])
{
	number a;
	number b;

	snprintf(a.s, SIZE, "1.5");
	snprintf(b.s, SIZE, "2");

	printf("%s\n", add_num(a, b, CHAR).s);

	a.i = 1;
	b.i = 3;

	printf("%d\n", add_num(a, b, INT).i);

	return 0;
}
