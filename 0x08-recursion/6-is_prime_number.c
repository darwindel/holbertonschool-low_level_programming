#include "holberton.h"
/**
* primeHelper - searches for if a number is prime
*
* @p: the number to check
* @count: the numbers we'll go through
*
* Return: Whether or not the number is a prime number
*/
int primeHelper(int p, int count)
{
	if (p <= 1 || p % count == 0)
		return (0);
	else if (p == count)
		return (1);
	else if (p > count)
		primeHelper(p, count + 1);
	return (1);
}

/**
* is_prime_number - will return 1 if the integer is a prime number
*
* @n: the integer
*
* Return: 0 if successful
*
*/
int is_prime_number(int n)
{
	return (primeHelper(n, 2));
}
