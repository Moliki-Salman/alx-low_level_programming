#include "main.h"
/**
 *_strlen - returns the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);

