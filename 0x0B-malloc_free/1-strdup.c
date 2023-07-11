#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicate a string using dynamic memory allocation
 * @str: strings to be duplicated
 * Return: Pointer to the duplicated string, NULL if fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
