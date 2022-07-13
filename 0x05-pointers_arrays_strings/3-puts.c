#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: parameter to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
