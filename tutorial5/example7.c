#include <stdio.h>

int main(void) {
	char num;

	printf("Enter a number between 1 and 5\n");
	scanf("%c", &num);

	switch (num) {
		case '1':
			printf("You typed 1\n");
			break;
		case '2':
			printf("You typed 2\n");
			break;
		case '3':
			printf("You typed 3\n");
			break;
		case '4':
			printf("You typed 4\n");
			break;
		case '5':
			printf("You typed 5\n");
			break;
		default:
			printf("The number you typed is not valid!\n");
			break;
	}
	printf("Code was executed sucessfully!\n");

	return 0;
}
