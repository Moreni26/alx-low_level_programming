#include "main.h"
#include <stdio.h>
/**
 * char * _strcpy - Copy the string pointed to by src.
 * @src: copy from
 * @dest: copy to
 * Description:This function that copies the string pointed
 * to by src.
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	int x = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for ( ; x < j; x++)
	{
		dest[x] = src[x];
	}
	dest[j] = '\0';
	return (dest);
}
