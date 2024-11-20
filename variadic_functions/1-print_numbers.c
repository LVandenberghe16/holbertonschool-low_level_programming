#include "variadic_functions.h"

/**
 * print_numbers - returns the sum of all its parameters
 *  @separator: oui
 *  @n: the number of parameters
 *
 * Return: the sum of all parameters, or 0 if n == 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
