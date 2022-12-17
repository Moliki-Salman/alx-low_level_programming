#include <stdio.h>

/**
 * main - prints single digeits in base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putcher((num % 10) + '0');

	putcher('\n');

	return (0);
}
