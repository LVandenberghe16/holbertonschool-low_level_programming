#include <unistd.h>

/**
* swap_int - oui
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
