#include <stdio.h>

/**
 *main - display the number or argument
 *@argc: argument numbers
 *@argv: an array of argc values
 *Return: return 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n",(argc - 1));

	return (0);
}
