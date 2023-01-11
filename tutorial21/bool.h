#ifndef _BOOL_H
#define _BOOL_H 1

#include "stdint.h"

#define true 1
#define false 0

typedef uint8_t boolean;

boolean is_valid_bool(boolean arg);
boolean XOR(boolean arg1, boolean arg2);

#endif
