#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: is a character to be chcked
 * Return: return 1 if c is a letter, returns 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
