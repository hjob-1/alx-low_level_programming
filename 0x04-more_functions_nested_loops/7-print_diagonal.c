#include "main.c"
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
