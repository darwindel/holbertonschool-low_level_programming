#include "holberton.h"
/*
* reverse_array - will reverse an array
*
* @a: goes into function
* @n: goes into function
*
* Return: 0 if successful
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n; i >= 0; i--)

	temp = a[n - i];
	a[n - i] = a[i];
	a[i] = temp;

}
