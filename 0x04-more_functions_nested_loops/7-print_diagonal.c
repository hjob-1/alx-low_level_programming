#include "main.h"
/**
 * print_diagonal - print diagonal symbol for a given n times
 * @n: specified the number of digonals
 * Return : return nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('\t');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
