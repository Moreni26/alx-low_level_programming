#include "main.h"
#include <stdio.h>
/**
 * _strlen - A function that return the lenght of a string.
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int len = 0;
	char *m = s;

	while (*m != '\0')
	{
		len++;
		m++;
	}
	return (len);
}
