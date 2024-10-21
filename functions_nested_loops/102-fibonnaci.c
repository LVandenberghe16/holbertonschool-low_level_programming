#include <stdio.h>

/**
 * main - computes the absolute value of an integer
 *
 * Return: the absolute value of the integer
 */
int main(void)
{
int count;
long fib1 = 1, fib2 = 2, next_fib;

printf("%ld", fib1);
printf(", %ld", fib2);
for (count = 3; count <= 50; count++)
{
next_fib = fib1 + fib2;
printf(", %ld", next_fib);
fib1 = fib2;
fib2 = next_fib;
}
printf("\n");
return (0);
}
