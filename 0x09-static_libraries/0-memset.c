#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: integer byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;


	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
