#include "main.h"
#include <stdio.h>
/**
* main - prints the name of the program
* @argc: arguements count
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
