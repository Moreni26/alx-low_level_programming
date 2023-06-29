#include "main.h"
#include <stdio.h>
/**
 * _strncat - function that concatenates two strings
 * @n: number of byes
 * @dest: pointer to the destination string
 * @src: pointer to thd source string
 * Description: This function use at most n bytes from src.
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
