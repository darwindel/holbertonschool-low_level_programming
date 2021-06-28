#include <stdio.h>
/**
* main - printing numbers from 0-9 with commas and space between them
*
* Return: 0
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
{
	putchar(c);
	if (c != '9')
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
