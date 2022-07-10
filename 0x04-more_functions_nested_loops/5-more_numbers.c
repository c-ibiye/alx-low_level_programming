#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int m;
	int n;

	if (m <= 10)
	{
		for (n =  0; n <= 14; n++)
		{
			_putchar(n);
		}
		_putchar(m);
	}
	_putchar('\n');
}
