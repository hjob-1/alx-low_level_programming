#include "main.h"

/**
 *print_line - prints n number of _
 *prints \n if n is less than 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n' + '0');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_' + '0');
		}
	}
}
