#include "function_pointers.h"

/**
 * print_name - prints string of name
 * @name: takes string value
 * f - a function that takes a string value and return nothing
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
