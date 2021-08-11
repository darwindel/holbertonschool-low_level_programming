#include <stdio.h>
#include "lists.h"
/**
* listint_len - return the number of elements in a linked listint_t
*
* @h: linked list
*
* Return: the number of elements in h
*/
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
	h = h->next;
	counter++;
	}
		return (counter);
}
