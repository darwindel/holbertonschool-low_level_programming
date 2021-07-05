#include "holberton.h"
#include <stdio.h>
/**
* swap_int - will swap the values of two integers
*
* @a: will go into the function
* @b: will go into the function
*
* Return: 0 if successful
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
