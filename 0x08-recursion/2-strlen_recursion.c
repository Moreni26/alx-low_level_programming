#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - return the length of a string
 * @s: String
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return 1 + _strlen_recursion(s + 1);
}
