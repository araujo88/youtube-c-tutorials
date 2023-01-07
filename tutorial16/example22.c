#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_SIZE 256

void safe_strcat(char *dest, const char *src, size_t max_size) {
	size_t dest_len = strlen(dest);
	size_t src_len = strlen(src);

	if (dest_len + src_len + 1 > max_size) {
		fprintf(stderr, "Error: destination buffer is not large enough to concatenate the given strings\n");
		exit(1);
	}

	strcat(dest, src);
}

int main(void)
{
	char buffer[MAX_BUFFER_SIZE];

	strcpy(buffer, "Hello ");
	safe_strcat(buffer, "world!", sizeof(buffer));
	printf("%s\n", buffer);

	return 0;
}
