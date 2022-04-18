#include "main.h"

/**
 *_strlen-calculates the length of a string
 *@s : a string givem
 * Return:string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}	

	return (count);
}
