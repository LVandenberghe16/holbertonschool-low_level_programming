#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - returns the sum of all its parameters
 *  @: oui
 *  @format: the number of parameters
 *
 * Return: the sum of all parameters, or 0 if n == 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil),");
			else
				printf("%s,", str);
			break;
		case 'f':
			printf("%f,", va_arg(args, double));
			break;
		case 'c':
			printf("%c,", va_arg(args, int));
			break;
		case 'i':
			printf("%i,", va_arg(args, int));
			break;
		default:
			break;
		}
		i++;
	}
	printf("\b \n");
}
