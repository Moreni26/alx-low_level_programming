#include "main.h"
#include <stdio.h>
/**
 * _strcat - Function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Description: This function appends the src string to the dest
 * string, overwriting null byte at the end of dest.
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
