#include "function_pointers.h"

/**
 * print_name - prints a name
 * @namae: pointer of name to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
        if (name != NULL && f != NULL)
                f(name);
}
