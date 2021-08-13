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
	unsigned int L, end = 0, B = 1;
	int i;

	if (b == NULL)
		return (0);
	for (L = 0; b[L] != '\0'; L++)
		;
	for (i = L - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			end += B;
			B = B * 2;
	}
		return (end);
}
