#include "main.h"
/**
 * _islower - Print 1 if c is a lowercase
 * @c: The character to be checked
 * Description: This fuctions checks for lowercase character.
 * The character is given by its ASCII code.
 * Return: 1 if c is a lowercase, 0 if otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
