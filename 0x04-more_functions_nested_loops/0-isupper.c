#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: carrier integer variable
 * Return: 1 for uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
