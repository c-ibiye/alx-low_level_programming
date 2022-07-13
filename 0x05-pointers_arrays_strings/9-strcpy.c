#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: first parameter to evaluate
 * @src: second parameter to evaluate
 *
 * return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
