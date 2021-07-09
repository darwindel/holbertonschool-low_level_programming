#include "holberton.h"
/**
* reverse_array - will reverse an array
*
* @a: goes into function
*
* @n: goes into function
*
* Return: 0 if successful
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;

}
}
