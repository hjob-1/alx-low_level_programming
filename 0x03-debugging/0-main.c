#include "main.h"
/**
 * main - tests functions that prints if integer is postive or negative
 * return: 0
 */
int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);
	
	i = 0;
	positive_or_negative(i);

	i = -10;
	positive_or_negative(i);	
	
	return (0);
}
