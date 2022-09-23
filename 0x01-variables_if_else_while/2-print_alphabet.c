#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	printf("\n");
	return (0);
}
