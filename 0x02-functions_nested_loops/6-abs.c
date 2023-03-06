#include "main.h"

/**
 * _abs - checks for absolut value
 * @a: parameter to be checked
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
