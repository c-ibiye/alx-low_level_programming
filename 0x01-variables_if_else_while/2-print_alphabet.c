#include <stdio.h>

/**
 * main - ENtry point
 *
 * Description: This program prints alphabet in lowercase
 *
 * Return: Always 0(success)
 */
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
	putchar(ch);
}

return (0);
}
