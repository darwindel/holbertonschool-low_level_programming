#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* init_dog - function will initialize a variable of type struct dog
*
* @d: dog in question
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: 0 if successful
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
