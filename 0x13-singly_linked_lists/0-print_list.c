#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* @h: pointed to the list
*
* Return: the list or  if NULL [0] (nil)
*/
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%i] %s\n", h->len, h->str);

	h = h->next;
	counter++;
	}
	return (counter);
}
