#include "function_pointers.h"
/**
* array_iterator - execute a func giv as a parameter on each element of arr
*
* @array: parameter for array
* @size: parameter for size
* @action: parameter for action
*
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
