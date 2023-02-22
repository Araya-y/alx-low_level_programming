#include "main.h"
/**
 * print_alphabet - entry point 
 * return 0
 */
void print_aphabet(void)
{
	char c = 0;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
