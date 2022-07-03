#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet
 * in lowercase except the letters q and e.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
}
putchar(10);

return (0);
}
