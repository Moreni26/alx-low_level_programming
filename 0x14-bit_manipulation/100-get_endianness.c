#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, otherwise 1
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
