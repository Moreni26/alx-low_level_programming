#include "main.h"
/**
 * main - Entry point
 * Description: This program prints alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i <=122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
