#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers followed by new line
 * @argc: takes in an integer
 * @argv: takes in a string
 * Return:returns 1 if it has error and return 0 if success
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc <= 1)
	{
		printf("%s\n", "Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
