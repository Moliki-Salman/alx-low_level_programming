#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(48 + b);

		if (b != 57)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}

	putchar('\n');

	return (0);
}
