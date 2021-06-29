#include "holberton.h"
/**
* _islower - will check for lowercase letters
*
* Return: 0 if successful
*/
int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	return (1);

	else if (c >= 'A' && c <= 'Z')
	return (0);
}
