#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: nothing
 */

void print_alphabet(void)
{
int c;

for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
_putchar('\n');
}
