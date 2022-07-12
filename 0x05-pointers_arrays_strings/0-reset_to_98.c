#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @*n: interger param to update
 *
 * Return: nothing
 */

void reset_to_98(int *n)
{
	printf("Value of 'n': %p\n", n);
	printf("Address of 'n': %p\n", &n);
	*n = 98;
}
