#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: int par
 *
 * return: depends on the input
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
