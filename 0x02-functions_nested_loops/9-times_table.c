#include "main.h"
/**
 * times_table - check descripition
 * Description: it prints 9 times table starting with 0
 * Return: nothing
 */ 
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul;

			mul = j * i;

			_putchar(mul + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
