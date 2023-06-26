#include "main.h"
#include <stdio.h>
/**
 * rev_string - A function that reverse a string.
 * @s: Strings
 */
void rev_string(char *s)
{
	char rev;
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
