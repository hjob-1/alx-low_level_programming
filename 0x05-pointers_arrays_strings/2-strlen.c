#include "main.h"

/**
 *_strlen -determine the length of character
 *@s: stores the address of the paramter
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	i = 0;

	while (i)
	{
		i++;
		if (*(s + i) == '/0')
		{
		break;
		}
	}

	return (i);
}
