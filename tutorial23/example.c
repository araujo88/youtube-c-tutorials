#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fd;

	fd = fopen("test.txt", "w");

	fprintf(fd, "Hello world!");

	fclose(fd);

	return 0;
}
