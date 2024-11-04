#include <stdio.h>

/**
 * main - prints the program's name followed by a new line
 * @ac: the argument count
 * @av: an array of strings representing the arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	if (ac == 0)
		printf("%s\n", av[0]);
	else
		printf("%s\n", av[0]);
	return (0);
}
