#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main(int argc, char *argv[])
{
	char buffer[SIZE];
	char input[] = "123 456 789";
	int a, b, c;

	printf("Enter a string: \n");

	// scanf("%s", buffer) -> UNSAFE!!!
	// gets(buffer); -> UNSAFE!!!
	fgets(buffer, sizeof(buffer), stdin); // safe
	// scanf("%ms", &buffer); -> safe
	
	// Similar to scanf:
	// sscanf_s -> MSVC
	// sscanf(input, "%d %d %d", &a, &b, &c);
	// printf("a = %d, b = %d, c = %d\n", a, b, c);

	printf("You typed the following: %s\n", buffer);

	// free(buffer);

	return 0;
}
