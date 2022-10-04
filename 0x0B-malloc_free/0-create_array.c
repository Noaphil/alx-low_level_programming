#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *
 * @size: The size of the array
 *
 * @c: Character to be used as initialization
 *
 * Return: returns a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	else
		return ('\0');
}
