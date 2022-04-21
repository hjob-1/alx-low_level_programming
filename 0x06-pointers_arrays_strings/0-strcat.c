#include "main.h"

/**
 *_strcat : it concatenates two string
 *
 * @dest : stores the concatenated strings
 *
 * @src : the string append on the dest
 *
 * Return: return a character
 */

char *_strcat(char *dest, char *src)
{
	int end_of_dest = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
		end_of_dest++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		dest[end_of_dest + i] = src[i];
		i++;
	}
	

	return (dest); 
}
