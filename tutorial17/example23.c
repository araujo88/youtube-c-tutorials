#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 32

int main(void)
{
	char buffer[BUFFER_SIZE];
	char *string = "Hello world!";

	if (sizeof(buffer) > 0) {
		strncpy(buffer, string, sizeof(buffer) - 1);
		buffer[sizeof(buffer) - 1]= '\0';
	}

	printf("buffer contents: %s\n", buffer);
	printf("strlen(buffer): %lu\n", strlen(buffer));

	return 0;
}
