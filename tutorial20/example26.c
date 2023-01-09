#include <stdio.h>

#define BUFFER_SIZE 256

const unsigned int buffer_size = 256;

int main(void)
{
	unsigned int i = 0;

	for (i = 0; i < 10000000; i++) {
		//printf("BUFFER_SIZE: %u\n", BUFFER_SIZE); // 2,926s
		printf("buffer_size: %u\n", buffer_size); // 2,988s
	}

	return 0;
}
