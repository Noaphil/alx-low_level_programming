#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - main block
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';
	int digit = 0;
	
	while (digit < 10)
	{
		putchar(digit + 48);
		digit++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
