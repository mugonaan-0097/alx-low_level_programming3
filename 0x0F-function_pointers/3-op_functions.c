#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: 0 if false, something else otherwise.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: 0 if false, something else otherwise.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: 0 if false, something else otherwise.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: 0 if false, something else otherwise
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	return (a / b);
}
/**
 * op_mod - modulus two numbers
 * @a: first number
 * @b: second number
 * Return: the value of the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
