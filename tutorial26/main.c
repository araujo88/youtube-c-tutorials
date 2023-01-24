#include <stdio.h>
#include <stdlib.h>

#define SIZE 4096

typedef enum _type {INT=1, FLOAT=2, CHAR=3} type;

typedef struct _number {
	type t;
	union {
		int i;
		float f;
		char s[SIZE];
	};
} number; // tagged union

number add_num(number a, number b)
{
	number r;

	if ((a.t == INT) && (b.t == INT)) {
		r.i = a.i + b.i;
	}
	else if ((a.t == FLOAT) && (b.t == FLOAT)) {
		r.f = a.f + b.f;
	}
	else if ((a.t == CHAR) && (b.t == CHAR)) {
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

	a.t = CHAR;
	b.t = CHAR;
	snprintf(a.s, SIZE, "1.5");
	snprintf(b.s, SIZE, "2");

	printf("%s\n", add_num(a, b).s);

	a.i = 1;
	b.i = 3;
	a.t = INT;
	b.t = INT;

	printf("%d\n", add_num(a, b).i);

	return 0;
}
