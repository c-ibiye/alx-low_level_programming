#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n =  0; n < 15; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
