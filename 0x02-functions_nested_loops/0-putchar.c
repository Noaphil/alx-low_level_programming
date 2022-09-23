#include "main.h"

/**main - Program entry point
 * Description: program prints _putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	char *string = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
