#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* main - print the different outputs of n
*
* Return: 0 if successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is zero");
	if (n == 0)
		printf("is zero");
	if (n < 0)
		printf("is zero");

	return (0);
}
