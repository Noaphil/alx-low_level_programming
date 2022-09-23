#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Return:0
 */
int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				if (i < j && j < k && i != j && j != k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i + j + k != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
