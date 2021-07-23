#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - will allocate memory using malloc
*
* @b: the memory
*
* Return: the pointer or 98 status value
*/
void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
