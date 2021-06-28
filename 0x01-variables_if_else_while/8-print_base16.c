#include <stdio.h>
/**
* main -will display numbers in lowercase
*
* Return: 0 if successful
*/
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
	for (n = 'a'; n <= 'f'; n++)
{
	putchar(n);
}
	putchar('\n');
	return (0);
}
