#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("Pointer size not provided\n");
		return 1;
	}

	unsigned int n = atoi(argv[1]);
	unsigned int it = 100000000;
	unsigned int i;

	int *array;

	for (i = 0; i < it; i++) {
		//array = (int *)malloc(n*sizeof(int)); // 1,405s for n = 100 (int)
		array = (int *)calloc(n, sizeof(int)); // 4,116s for n = 100 (int)
		free(array);
	}	

	return 0;
}
