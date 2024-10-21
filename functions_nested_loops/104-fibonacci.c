#include <stdio.h>

/**
 * main - computes the absolute value of an integer
 *
 * Return: the absolute value of the integer
 */
int main(void)
{
int count;
unsigned long fib1 = 1, fib2 = 2, next_fib;
unsigned long fib1_high = 0, fib2_high = 0, next_fib_high = 0;

printf("%lu, %lu", fib1, fib2);
for (count = 3; count <= 98; count++)
{
if (fib2 > 1000000000)
{
next_fib_high = fib1_high + 1;
next_fib = fib2 - 1000000000;
fib1_high = fib2_high;
fib2_high = next_fib_high;
}
else
{
next_fib = fib1 + fib2;
next_fib_high = fib1_high;
}
printf(", %lu", next_fib + (next_fib_high * 1000000000));
fib1 = fib2;
fib2 = next_fib;
}
printf("\n");
return (0);
}
