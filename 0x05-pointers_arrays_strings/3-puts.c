#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: parameter to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		str++;
		_putchar(*str);
	}
	_putchar('\n');
}
