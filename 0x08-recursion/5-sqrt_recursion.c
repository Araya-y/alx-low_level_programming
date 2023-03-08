#include "main.h"

/**
 * _sqrt - another called function to perform the sqrt
 * @i: input for calculating the square
 * @n: an integer where it's sqrt to be calculated
 * Return: sqrt
 */
int _sqrt(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_sqrt(i + 1, n));
	else if (i * i == n)
		return (i);
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: an integer where its natural square root to be calculated
 * Return: -1 if n < 0, else natural square root.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else
		return (_sqrt(i, n));
}
