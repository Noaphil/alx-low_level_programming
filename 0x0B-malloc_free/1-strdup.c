#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 *
 * @str: pointer to a string
 *
 * Return: Returns a pointer to a duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	size = i;
	ptr = malloc((sizeof(char) * size) + 1);
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
	return (NULL);
}
