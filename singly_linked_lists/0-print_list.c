#include <unistd.h>
#include "lists.h"

/**
 * _putchar - writes a character to stdout.
 * @c: The character to print.
 *
 * Return: On success, 1. On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to print.
 */
void _puts(const char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * print_number - Prints an unsigned integer to stdout.
 * @n: The number to print.
 */
void print_number(unsigned int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		if (h->str)
		{
			_putchar('[');
			print_number(h->len);
			_putchar(']');
			_putchar(' ');
			_puts(h->str);
		}
		else
		{
			_puts("[0] (nil)");
		}
		h = h->next;
		count_node++;
	}
	return (count_node);
}
