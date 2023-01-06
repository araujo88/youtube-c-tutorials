#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char string1[] = "test1";
	char string2[] = "test2";
	char *string3;
	unsigned int n = 32;

	string3 = (char *)malloc(n*sizeof(char));
 
	if (strcmp(string1, string2) == 0) {
		printf("string1 is equal to string2\n");
	}
	else {
		printf("string1 is different than string2\n");
		printf("Return value of strcmp: %d\n", strcmp(string1, string2));
	}

	string3 = strncat(string3, string1, strlen(string1));
	string3 = strncat(string3, string2, strlen(string2));

	printf("string3: %s\n", string3);

	free(string3);

	return 0;
}
