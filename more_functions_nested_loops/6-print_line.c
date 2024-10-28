#include <unistd.h>

/**
* mul - oui
* @n: num
* Return: restult
*/
void print_line(int n)
{
	int i;

	if (n <= 0) {
		goto newline;
	}
	for (i = 0; i < n; i++) {
		write(1, "_", 1);
	}
	newline:
		write(1, "\n", 1);
}
