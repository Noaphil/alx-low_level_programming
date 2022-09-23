#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: parameters
 * Return: 0 (success) and 1 (otherwise)0
 */

int _islower(int c)
{
	int result;

	result = c >= 97 && c <= 122 ? 1 : 0;
	return (result);
}
