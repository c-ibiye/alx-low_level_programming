#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the
 * numbers of base 16 in lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
char ch;
int num;

for (num = '0'; num <= '9'; num++)
{
	putchar(num);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
putchar(10);

return (0);
}
