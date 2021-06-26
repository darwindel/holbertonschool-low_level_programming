#include <stdio.h>
/**
* main - Displaying numbers with putchar
*
* Return: 0 if correct
*/
int main(void)
{ 
	int n;
	
	if (n < 0) 
{
	putchar('-');
	n=-n;
}
	if (n / 10 != 0)
{	
	putchar(n / 10);
}

	return (0);

}

