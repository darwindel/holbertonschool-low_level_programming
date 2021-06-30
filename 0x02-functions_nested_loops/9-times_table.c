#include <stdio.h>
#include "holberton.h"
/**
* times_table - will print out a times table
*
* Return: 0 if successful
*
*/
void times_table(void)
{
	int i, n, x;

	for (i = 0; i <= 9; i++)
{
	for (n = 0; n <= 9; n++)
{
	x = i * n;

	if (n < 9 && n != 0)
{
	if (x <= 9)
	printf("  %d,", x);
	else
	printf(" %d,", x);
}
	else
{
	if (n == 0)
	printf("%d, ", x);
	else
	printf(" %d", x);
}
}
	printf("\n");
}
}
