#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - will print numbers to 98
*
* @n: number will be put into print_to_98
*
* Return: 0 if successful
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
{
	for (i = n; i >= 98; i--)
{
	if (i != 98)
	printf("%d, ", i);
	else
	printf("%d, ", i);
}
}
	else
{
	for (i = n; i <= 98; i++)
{
	if (i != 98)
	printf("%d, ", i);
	else
	printf("%d", i);
}
}
}
