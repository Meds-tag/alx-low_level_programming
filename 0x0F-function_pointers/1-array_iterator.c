#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function prints each array element
 * @array: array
 * @size: number of elem to print
 * @action: pointer to the function
 * Return: return nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
