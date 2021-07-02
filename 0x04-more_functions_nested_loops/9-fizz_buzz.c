#include "holberton.h"
#include <stdio.h>
/**
* main - will print fizz buzz
*
* Return: 0 if successful
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ("i%15" == 0)
	printf("FizzBuzz\t");

	else if (("i%3") == 0)
	printf("Fizz\t");

	else if (("i%5") == 0)

	printf("Buzz\t");

	printf("%d\t", i);

}

	return (0);
}
