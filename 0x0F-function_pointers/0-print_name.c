#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: pointer to Name's string.
 * @f: pointer to function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
