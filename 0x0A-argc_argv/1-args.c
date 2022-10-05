#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
