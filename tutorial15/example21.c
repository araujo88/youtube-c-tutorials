#include <stdio.h>
#include <string.h>

size_t my_strlen(char *string)
{
	size_t i = 0;

	while (string[i] != '\0') {
		i++;
	}

	return i;
}

int my_strcat(char *dst, char *src, size_t n)
{
	size_t i = 0;
	size_t j = 0;

	if (dst[strlen(dst)] != '\0') {
		return -1;
	}

	if (src[strlen(src)] != '\0') {
		return -2;
	}

	if (my_strlen(src) + my_strlen(dst) >= n) {
		return -3;
	}
	
	while (dst[i] != '\0') {
		i++;
	}

	while (src[j] != '\0') {
		dst[i + j] = src[j];
		j++;
	}

	return 0;
}

int main(void)
{
	char string1[11] = "test1";
	char string2[6] = "test2";

	printf("my_strlen: %lu\n", my_strlen(string2));
	printf("strlen: %lu\n", strlen(string2));

	if (my_strcat(string1, string2, 11) == 0) {
		printf("string1: %s\n", string1);
		if (string1[11] == '\0') {
			printf("last char of string1 is the null char\n");
		}
	}
	else {
		printf("An error occurred\n");
	}

	return 0;
}
