#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: string to add
 * @f: pointer to function: such as 'print_name_as_is'
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
