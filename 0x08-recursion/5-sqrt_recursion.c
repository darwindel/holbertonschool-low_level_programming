#include "holberton.h"
/**
* _sqrt_recursion - will return square root of a number
*
* @n: number that will be tested for square root
*
* Return: 0 if successful
*/
int _sqrt_recursion(int n)
{


	if ((n * n) == n)
	{	
		return (n);
	}
	else if (n < 0)
	{
		return (-1);

	return (_sqrt_recursion(--n));
	}	
}
