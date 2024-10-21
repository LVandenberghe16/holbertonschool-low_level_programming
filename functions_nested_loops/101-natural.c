#include <stdio.h>

/**
 * main - computes the absolute value of an integer
 *
 * Return: the absolute value of the integer
 */
int main(void)
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
