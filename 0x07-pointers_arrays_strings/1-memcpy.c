#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: destination pointer parameter
 * @src: source pointer parameter
 * @n: number of bytes to be copied from src
 * Return: returns a pointer to a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
