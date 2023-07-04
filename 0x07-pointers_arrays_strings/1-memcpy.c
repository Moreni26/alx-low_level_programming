#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n byte from memory area src to memory area dest
 * @dest: memory where it's stored
 * @n: number of bytes
 * @src: memory copied from.
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

