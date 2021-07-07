#include <stdio.h>
#include "holberton.h"
/**
* print_array - will print elements of an array
*
* @a: will go into print_array
* @n: will go into print_array
*
* Return: 0 if successful
*/
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter <= n; counter++)
{
	printf("%d", a[counter]);

	if (counter < n - 1)

	printf(", ");
}
}
