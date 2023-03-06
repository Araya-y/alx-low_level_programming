#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill
 * @n: the number of bytes to be filled
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
