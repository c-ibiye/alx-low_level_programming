#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: parameter to check
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
