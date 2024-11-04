#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - copies n bytes from memory area src to memory area dest
 * @a: destination memory area
 * @size: source memory area
 *
 * Return: pointer to dest
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag_sum1 = 0;
	int diag_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_sum1 += *(a + (i * size + i));
		diag_sum2 += *(a + (i * size + (size - 1 - i)));
	}
	printf("%d, %d\n", diag_sum1, diag_sum2);
}
