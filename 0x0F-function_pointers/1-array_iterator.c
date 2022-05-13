#include "function_pointers.h"

/**
 * array_iterator - prints the all the values of array
 * @array: an array of int values
 * @size: size of an array
 * @action: a pointer points to a function
 * Return - nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}	
	}
}
