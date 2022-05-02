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
	int **arr;
	int i, j, INT_SIZE;
	INT_SIZE = 4;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int**)malloc(INT_SIZE * width * 2);

	for (i = 0; i < width; i++)
		arr[i] = (int*)malloc(INT_SIZE * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
