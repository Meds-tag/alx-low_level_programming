#include "function_pointers.h"
/**
 * int_index - returns index of the first element for which the cmp != 0
 * @array: array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
