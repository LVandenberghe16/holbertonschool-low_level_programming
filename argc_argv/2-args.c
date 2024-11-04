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
	int i;

	for (i = 0; i != ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
