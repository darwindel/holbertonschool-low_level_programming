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
	int i;
	char temp;

	n = 0;
	i = strlen(a) - 1;

	while (i < n)
{
	temp = a[n];
	a[n] = a[i];
	a[i] = temp;
	n++;
	i--;
}
}
