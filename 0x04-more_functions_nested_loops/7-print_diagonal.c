#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: int par
 *
 * Return: different outcome
 */

void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
