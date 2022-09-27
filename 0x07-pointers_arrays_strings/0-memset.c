#include "main.h"

/**
 * _memset - fills the first n bytes with b
 * @s: a pointer pointing to char as parameter
 * @b: a constant byte parameter
 * @n: numberof bytes to be changed
 * Return: returns a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
