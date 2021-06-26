#include <stdio.h>
/**
* main- Will print alphabet without q and e
*
* Return: 0 if successful
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
{
	putchar (ch);
}
	if (ch != 'e' && ch != 'q')
{
	putchar (ch);
}
	return (0);
}
