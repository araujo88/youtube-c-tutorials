#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 256

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("Insufficient arguments provided\n");
		return 1;
	}
	if (strlen(argv[1]) > BUFFER_SIZE) {
		printf("The argument provided has more than 256 bytes\n");
		return 1;
	}

	char string[] = "Strings can get you hacked!!";
	char *string2;
	char buffer[BUFFER_SIZE];

	if (strchr(string, '!') != NULL) {
		printf("string contains the char '!'\n");
	}

	if (strchr(string, '@') == NULL) {
		printf("string does not contain the char '@'\n");
	}

	if (strstr(string, "hacked") != NULL) {
		printf("the string contains the substring 'hacked'\n");

		string2 = strstr(string, "hacked");

		printf("string2: %s\n", string2);
	}

	snprintf(buffer, sizeof(buffer), "Hello %s\n", argv[1]);

	printf("%s", buffer);

	char string3[] = "leonardo,34,developer";
	char *string4;
	int i = 0;

	do {
		if (i == 0) {
			string4 = strtok(string3, ",");
		}
		else {
			string4 = strtok(NULL, ",");
		}

		if (string4 != NULL) {
			printf("%s\n", string4);
		}
		i++;

	} while (string4 != NULL);

	return 0;
}
