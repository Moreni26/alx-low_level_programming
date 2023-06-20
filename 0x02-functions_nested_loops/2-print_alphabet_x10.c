#include "main.h"
/**
 * print_alphabet - Prints the alphabet ten times in lowercase
 * Description: This function  print alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 97; i <= 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
