#include "main.h"
#include <stdio.h>
/**
 * print_t0_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: it specify from where the number starts
 */
void print_to_98(int n)
{
	int i;
	
	if (n <= 98)
	{
		for (i = n; n <= 97; i++)
			printf("%d, ", i);
	}
	else
		for (i = n; n > 98; i--)
			printf("%d, ", i);
	printf("98\n");
}
