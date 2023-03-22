#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name- main function
 * @name: print the name
 * @f: pointer to the printing function
 */



void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
