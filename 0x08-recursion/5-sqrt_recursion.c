#include "holberton.h"
/**
* helper - will return square root of a number
*
* @a: number that will be tested for square root
* @b: number that will test for square root of a
*
* Return: 0 if successful
*/
int helper(int a, int b)
{

	if (b * b > a)
		return (-1);
	
	else if (b * b == a)
	
		return (b);

	else
		return (helper(a, b + 1));
	
	return (1);
}

/**
* _sqrt_recursion - will return natural square root of number
*
* @n: the number to return square root
*
* Return: the square root
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
