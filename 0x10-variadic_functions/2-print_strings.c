#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @separator: string separator
  * @n: number of strings
  * Return: ...
  */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list args;
	unsigned int i;
	char *p;

	va_start(li, n);

for (i = 0; i < n; i++)
{
p = va_arg(args, char *);
if (p == NULL)
printf("(nil)");
else
printf("%s", p);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

}

printf("\n");
va_end(args);
}
