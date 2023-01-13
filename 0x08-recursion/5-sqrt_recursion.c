#include "main.h"
/**
 * actual_sqrt_recursion - recurses to return actual square root
 * of a number
 * @n: input integer
 * @i: iterator
 * Return: -1 if n has no natural square root otherwise return 0
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * Return: -1 if n has no natural square root otherwise return 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
