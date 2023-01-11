#include <stdio.h>
#include "bool.h"

int main(int argc, char *argv[])
{
	boolean x = true;
	boolean y = false;
	boolean z = true;
	boolean u = false;
	boolean w = 3;

	printf("x = %hu\n", x);
	printf("y = %hu\n", y);
	printf("z = %hu\n", z);
	printf("w = %hu\n", w);

	printf("%hu\n", is_valid_bool(x));
	printf("%hu\n", is_valid_bool(y));
        printf("%hu\n", is_valid_bool(z));
        printf("%hu\n", is_valid_bool(w));

	printf("XOR(x,y) = %hu\n", XOR(x, y));
	printf("XOR(x,z) = %hu\n", XOR(x, z));
	printf("XOR(y,u) = %hu\n", XOR(w, u));

	return 0;
}
