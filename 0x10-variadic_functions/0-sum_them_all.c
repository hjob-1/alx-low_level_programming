#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list ap;
	sum = 0;
	i = 0;
	
	if (n == 0)
		return (0);
	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
