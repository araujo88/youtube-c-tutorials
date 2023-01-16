#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fd;

	if (argc < 2) {
		printf("Usage:\n ./main <string>\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen("test.txt", "w");

	if (fd == NULL) {
		fprintf(stderr, "An error occurred while opening the file\n");
		exit(EXIT_FAILURE);
	}

	fprintf(fd, "%s\n", argv[1]);
	// fwrite(argv[1], strlen(argv[1]), 1, fd);

	fclose(fd);

	return 0;
}
