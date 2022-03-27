#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listoftype - Struct listoftype
 * @op: operator
 * @f: The function asociated.
 */

typedef struct listoftype
{
	char *op;
	void (*f)();
} lot;

int sum_them_all(const unsigned int n, ...);

#endif
