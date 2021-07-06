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

	for (n = 0; n < *a; n++)
{
	printf("[%d] ,", a[n]);
}
}
