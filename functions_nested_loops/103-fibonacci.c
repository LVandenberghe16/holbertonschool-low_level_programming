#include <stdio.h>

/**
 * main - computes the absolute value of an integer
 *
 * Return: the absolute value of the integer
 */
int main(void)
{
long fib1 = 1, fib2 = 2;
long next_fib;
long sum = 0;

while (fib1 <= 4000000)
{
if (fib1 % 2 == 0)
{
sum += fib1;
}
next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;
}
printf("%ld\n", sum);
return (0);
}
