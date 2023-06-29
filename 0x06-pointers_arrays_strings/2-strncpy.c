#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
