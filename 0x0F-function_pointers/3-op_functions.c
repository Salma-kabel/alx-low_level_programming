#include "3-calc.h"

/**
 * op_add - add two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divide two numbers and get the remainder
 *
 * @a: first number
 * @b: second number
 *
 * Return:  remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
