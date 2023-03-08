#include "main.h"

/**
 * check_num - recursion loop
 * @n: input number
 * @i: input
 * Return: 1 or 0
 */
int check_num(int n, int i)
{
	if (i == n - 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (check_num(n, i + 1));
	return (0);
}

/**
 * is_prime_number - check prime or not
 * @n: input
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	else
		return (check_num(n, i));
}
