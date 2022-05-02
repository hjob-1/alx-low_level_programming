#include "main.h"
#include <stdlib.h>

/**
 * strdup - copies the given string and return a pointer
 * @str: takes in a string
 * Return: null if str is equal to null or pointer
 */
char *_strdup(char *str)
{
	char *arr;
	int size;

	size = 0;
	
	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	--size;
	arr = malloc(size);

	if (arr == NULL)
		return (NULL);
	*arr = str;
	
	return (arr);
}
