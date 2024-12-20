#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

/**
 * is_digit - prints the program's name followed by a new line
 * @str: the argument count
 *
 * Return: Always 0 (Success)
 */
int is_digit(char *str)
{
	if (*str == '\0')
		return (0);
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (!isdigit((unsigned char)*str))
			return (0);
		str++;
	}
	return (1);
}

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
	int sum = 0;
	int num;

	if (ac == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		if (is_digit(av[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(av[i]);
		if (sum > INT_MAX - num)
		{
			printf("%d\n", INT_MAX);
			return (0);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
