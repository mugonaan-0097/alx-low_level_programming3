#include "main.h"

/**
 * _puts - function that prints a string, followed
 * by a new line, to stdout
 * @str: validate the checker
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
