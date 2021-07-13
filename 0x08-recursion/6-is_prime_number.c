#include "holberton.h"
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
	int p = 0;

	if (p == n)

		return (0);

	else
		if (p % n == 0)
		
		return (1);
	else
		{
	return (is_prime_number (n + 1));
		}	
}
