#include "main.h"
#include <stdlib>

/**
 * create_array - creates an array of chars and initilizes it with a specific char
 * @size: size of the the array
 * @c: takes char value
 * Return: null if size = 0, return pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size);
		
		if ( arr == NULL)
			return (NULL);
		else
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;	
			}
		return (arr);	
		}
	}
}
