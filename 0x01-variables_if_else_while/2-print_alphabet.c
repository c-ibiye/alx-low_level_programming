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
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
	printf("\n");
}

return (0);
}
