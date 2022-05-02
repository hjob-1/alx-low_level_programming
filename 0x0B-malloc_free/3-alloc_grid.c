#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: takes in integer
 * @height: takes in integer
 * Return: return null in failure,0,or negative valuen else pointer
 */

int **alloc_grid(int width, int height)
{
	int *arr;
	int i, INT_SIZE;
	INT_SIZE = 4;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(INT_SIZE * width * height);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width * height; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
