#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + 48);
		digit++;
	}
	putchar('\n');
	return (0);
}
