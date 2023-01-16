#include <stdio.h>
#include <stdlib.h>

#define SIZE 4096

int main(int argc, char *argv[])
{
	FILE *fd;
	char buffer[SIZE];
	char *bytes_read;

	if (argc < 2) {
		printf("Usage:\n ./main <filepath>\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");

	if (fd == NULL) {
		fprintf(stderr, "An error occurred while opening the file\n");
		exit(EXIT_FAILURE);
	}

	while ((bytes_read = fgets(buffer, sizeof(buffer), fd)) != 0) {
		fprintf(stdout, "%s", buffer);
	}

	fclose(fd);

	return 0;
}
