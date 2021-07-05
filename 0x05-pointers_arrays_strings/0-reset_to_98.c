#include "holberton.h"
#include <stdio.h>
/**
* reset_to_98 - function that will take a pointer to an int
*
* @n: this will go into the function
*
* Return: 0 if successful
*/
void reset_to_98(int *n)
{
	int p;

	p = 98;
	n = &p;

	printf("Value of 'n' : %n\p", n);
}
