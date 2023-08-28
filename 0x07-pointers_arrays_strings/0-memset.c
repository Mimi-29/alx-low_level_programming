#include <stdio.h>
#include "main.h"

/**
 * _memset - Code fills a memory with constant byte
 * @s: a string
 * @n: an integer
 * @b: a character
 *
 * Return: a character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
