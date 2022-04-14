#include "main.h"
/**
 * print_diagonal - print diagonal symbol for a given n times
 * @n: specified the number of digonals
 * Return : return nothing
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\');
			_putchar('\n');
			_putchar('\' + i +'t');
		}
		_putchar('\n');
	}
}
