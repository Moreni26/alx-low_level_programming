#include "main.h"
/**
 * _isalpha - check if c is a letter,(lowercase or uppercase)
 * @c: The character to be checked
 * Description: This function check the letter c.
 * The character is given by its ASCII code.
 * Return: 1 if c is letter, (uppercase or lowercase), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
