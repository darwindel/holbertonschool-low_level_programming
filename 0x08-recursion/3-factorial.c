#include "holberton.h"
/**
* factorial - will return the factorial of a given number
*
* @n: number to give factorial
*
* Return: 0 if successful
*/
int factorial(int n)
{
	if (n == 0)
		return 1;

		return (n * factorial(n - 1));
}
