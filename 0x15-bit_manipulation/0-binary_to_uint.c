#include <stdio.h>
#include "holberton.h"
/**
* binary_to_uint - will convert binary to unsigned int
*
* @b: the string to convert
*
* Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int L = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' && b[i] > '1')
			return (0);
		L = 2 * L + (b[i] - '0');
	}
		return (L);
}
