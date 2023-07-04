#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - functinon that print a chessboard
 * @a: This is an array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{

	int i;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
			putchar(a[i][k]);
		putchar('\n');
	}
}
