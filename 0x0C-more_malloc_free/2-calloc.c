#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - print buffer in hexa
 * @s: buffer
 * @b: write
 * @n: size
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: string s1.
 * @size: string s2.
 *
 * Return: Always o.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	_memset(str, 0, nmemb * size);
	return (str);
}
