#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit
 * numbers of base 10 starting from 0.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
int num;

for (num = 48; num <= 57; num++)
{
	putchar(num);
}
putchar(10);

return (0);
}
