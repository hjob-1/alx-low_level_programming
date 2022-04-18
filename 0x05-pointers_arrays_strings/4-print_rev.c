#include "main.h"

/**
 * print_rev - display the string in a reverse way
 * @s : store the values of the given string
 * Return : nothing
 */
void print_rev(char *s)
{
	int i, len, tmp;

	while ( *s != '\0')
	{
	 	len++;
		s++;
	}

	for (i = 0; i < len; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}

	for ( i =0; i < len; i++)
	{
		_putchar(s[i]);
	}


}
