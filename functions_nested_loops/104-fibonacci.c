#include <stdio.h>

/**
 * main - computes the absolute value of an integer
 *
 * Return: the absolute value of the integer
 */
int main(void)
{
int count;
__uint128_t fib1 = 1, fib2 = 2, next_fib;

printf("%lu, %lu", fib1, fib2);
for (count = 3; count <= 98; count++)
{
next_fib = fib1 + fib2;
printf(", %lu", next_fib);
fib1 = fib2;
fib2 = next_fib;
}
printf("\n");
return 0;
}

