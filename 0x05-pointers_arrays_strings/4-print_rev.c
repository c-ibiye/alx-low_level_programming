#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: parameter to print
 *
 * return: nothing
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\n')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
