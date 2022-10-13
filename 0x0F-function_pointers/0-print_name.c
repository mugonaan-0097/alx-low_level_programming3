#include <stdio.h>
#include <function_pointers.h>

/**
 * print_name - print name
 * @name: name to print
 * @f: pointer to the printing function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
