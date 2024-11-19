#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of division of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0); /* Division by zero is handled in main */
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0); /* Modulo by zero is handled in main */
	}
	return (a % b);
}
