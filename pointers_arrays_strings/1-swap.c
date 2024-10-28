#include <unistd.h>

/**
* reset_to_98 - oui
* @a: num
* @b: num
* Return: restult
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
