#include <stdio.h>
#include "holberton.h"
/**
* print_diagsums - will print the sum of two diagonals of a square matrix of ints
*
* @a: the two diagonals
* @size: the size of the matrix
*
* Return: 0 if successful
*/
void print_diagsums(int *a, int size)
{
	int line, column;
	int sum1 = 0;
	int sum2 = 0;

	printf("%d", sum1);

	for (line = 0; line < size; line++)
	{
		for (column = 0; column < size; column++)
		{
			if (line == column)

				sum1 = a[ ][] + sum1;
			if (line == size - column - 1)
				sum2 = a[][] + sum2;
		}

	}
		printf("%d", sum1, sum2)
}
