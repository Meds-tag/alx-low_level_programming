#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/** Variadic function to add numbers **/
int sum_them_all(const unsigned int n, ...)
{
	int Sum=0;
	va_list ptr;
	va_start(ptr, n);
	unsigned int i;
	if (n == 0)
		exit(EXIT_SUCCESS);

	/** Declaring pointer to the **/
	/** argument list **/
	

/**
* Initializing argument to the
* list pointer
**/

	for (i = 0; i < n; i++)

		/** Accessing current variable **/
		/** and pointing to next one **/
		Sum += va_arg(ptr, int);

	/** Ending argument list traversal **/
	va_end(ptr);

	return Sum;
}
