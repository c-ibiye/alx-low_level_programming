#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100, But for multiples
 * of 3 & 5 print Fizz and Buzz and FizzBuzz for both
 *
 * Return: nothing
 */

void fizz_buzz(void)
{
	for (int x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", x);
	}
	printf("\n");
}
