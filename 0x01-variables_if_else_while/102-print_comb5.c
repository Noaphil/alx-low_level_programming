#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program entry
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j;
	int k;
	int l;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				l = 0;
				while (l < 10)
				{
					if (j < l)
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(' ');
						putchar(k + 48);
						putchar(l + 48);
						if (i + j + l + k != 9 + 8 + 7 + 6)
						{
							putchar(',');
							putchar(' ');
						}
					}
					l++;
				}
				k++;
			}
			j++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
