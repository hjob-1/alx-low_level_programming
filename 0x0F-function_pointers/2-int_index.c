#include "function_pointers.h"

/**
 * int_index - finds the index of an given element from the array
 * @size: takes an int value
 * @cmp: a pointer points to a function
 * Return: either it doesn't find the elmt or size is less than 0 it return -1 .return 0 elmt found
 *@array: takes int of elements
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int isfound;

	if (size <= 0 || array || cmp)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		isfound = cpm(array[i]);

		if(isfound)
			return (i);	
	}
	return (-1);
}
