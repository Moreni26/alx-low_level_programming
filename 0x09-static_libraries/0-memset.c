#include "main.h"
#include <stdio.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b.
 * @n: mumber of bytes to be changed
 * @s: starting address of memory to be filled
 * @b: desired value
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
