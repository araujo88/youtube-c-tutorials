#include "bool.h"
#include <stdio.h>
#include <stdlib.h>

boolean is_valid_bool(boolean arg) {
	if ((arg != true) && (arg != false)) {
		return false;
	}
	else {
		return true;	
	}
}

boolean XOR(boolean arg1, boolean arg2) {
	if (!is_valid_bool(arg1)) {
		printf("An error occurred!\n");
		exit(1);
	}
	if (!is_valid_bool(arg2)) {
		printf("An error occurred!\n");
		exit(1);
	}

	if (arg1 == true && arg2 == false) {
		return true;
	}
	else if (arg1 == false && arg2 == true) {
		return true;
	}
	else {
		return false;
	}
}
