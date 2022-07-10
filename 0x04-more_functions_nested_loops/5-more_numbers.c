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

	for (m = 0; m <= 14; m++)
	{
		for (n =  0; n <= 10; n++)
		{
			_putchar(n);
		}
		_putchar(m);
	}
	_putchar('\n');
}
