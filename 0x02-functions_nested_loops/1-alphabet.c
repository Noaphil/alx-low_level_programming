#include "main.h"

/**
 * print_alphabet - function prints alphabet
 *
 * Description: Program prints alphabet
 *
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
