#include "main.h"
#include <stdio.h>
/**
 * print_t0_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: it specify from where the number starts
 */
#define LIMIT  98;
void print_to_98(int n)
{
	int i;

	if (n > LIMIT)
	{
		for (i = n; i >= LIMIT; i--)
		{
			printf("%d",i);
			printf("%c",',');
			printf("%c",' ');
		}
	}
	else
	{
		for (i = n; i <= LIMIT; i++)
		{
			printf("%d",i);
			printf("%c",',');
			printf("%c",' ');
		}
	}
}
