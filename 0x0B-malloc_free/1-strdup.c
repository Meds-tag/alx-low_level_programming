#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* 1-strdup - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
*/

char *_strdup(char *str)
{
	char *bac;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	bac = malloc(sizeof(char) * (i + 1));

	if (bac == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		bac[r] = str[r];

	return (bac);
}
