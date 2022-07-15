#include <stdio.h>

int main(void)
{
	char *string1 = "hello";
	char string2[5 + 1] = "world";
	int i = 0;

	// in memory, string2 is [w][o][r][l][d][\0]

	while (string1[i] != '\0') {
		printf("%c", string1[i]);
		i++;
	}
	printf("\n");

	printf("%s\n", string2);

	return 0;
}
