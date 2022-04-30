#include <stdio.h>
#include <stdlib.h>

/**
 * main - add the positive nymbers
 * @argc: takes in a integer
 * @argv: takes in a string
 * Return: 1 if arguments conatins non digit number ,else return 0
 */
int isnumber(char *c);

int main(int argc, char *argv[])
{
	int add, i;

	add = 0;
	
	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (isnumber(argv[i]) == '0')
			{
				add += atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}	
		}
	printf("%d\n", add);
	}
	else
		printf("%s\n", "0");

	return (0);
}

int isnumber(char *c)
{
	return (*c >= '0' && *c <= '9');
}
