#include <unistd.h>

/**
* more_numbers - oui
*
* Return: restult
*/
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		write(1, "01234567891011121314\n", 21);
	}
}
