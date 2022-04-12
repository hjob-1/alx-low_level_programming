#include "main.h"
/**
  * times_table - check descripition
  * Description: It prints 9 times table starting with 0.
  * Return: nothing.
  */ 

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int mul;

			mul = j * i;

			if ((mul / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(mul + '0');
				if (j == 9)
					continue;

				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (j == 9)
					continue;

				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
