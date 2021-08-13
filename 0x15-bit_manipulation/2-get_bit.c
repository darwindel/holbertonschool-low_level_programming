#include "holberton.h"
/**
* get_bit - returns value of a bit at an index in a decimal num
*
* @n: number to search
* @index: index of bit
*
* Return: value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{

	int val;

	if (index > 63)

	return ((n >> index) & 1);

	return (-1);
}
