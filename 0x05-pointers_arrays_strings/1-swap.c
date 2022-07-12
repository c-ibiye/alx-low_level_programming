#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first interger param
 * @b: second interger param
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
