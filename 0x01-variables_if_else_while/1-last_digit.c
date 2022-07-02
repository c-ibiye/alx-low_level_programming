#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed and print
 * the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
	printf("Last digit of %d is   and is greater than 5\n", int n);
}
if (n == 0)
{
	printf("Last digit of %d is   and is 0\n", int n);
}
if (n < 6 && n != 0)
{
	printf("Last digit of %d is   and is less than 6 and not 0\n", int n);
}

return (0);
}
