#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
		i++;
	}

}
