#include "main.h"

/**
 *_strlen - prints the length of the chars
 *@s: stores the values of chars
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (len)
	{
		if (*(s + len) == "\0")
		{
			break;
		}
		len++;
	}	

	return (len);
}
