#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - is a function that returns the sum of all its parameters
 * @n: is the int parameter
 * Return: sum or if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, i = 0;
	
	if (n == 0)
		return (0);
	
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
