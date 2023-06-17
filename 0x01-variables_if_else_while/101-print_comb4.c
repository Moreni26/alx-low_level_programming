#include <stdio.h>
/**
 * main - prints if the number is positive, zero, or negative
 * Description: this program prints combinations of three digits
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i, o;

	for (i = 0; i < 100; i++)
	{
		for (o = i + 1; o < 100; o++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((o / 10) + '0');
			putchar((o % 10) + '0');
			if (i == 98 && o == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
