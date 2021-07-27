#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - will free some dogs
*
* @d: the variable that we will free up
*
* Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
