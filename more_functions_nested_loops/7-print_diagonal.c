#include <unistd.h>
/**
* print_diagonal - oui
* @n: num
* Return: restult
*/
void print_diagonal(int n)
{
	int i, j;
	if (n <= 0)
		return (void)write(1, "\n", 1);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			write(1, " ", 1);
		}
		write(1, "\\\n", 2);
	}
}

/**
* main - oui
* Return: restult
*/
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
