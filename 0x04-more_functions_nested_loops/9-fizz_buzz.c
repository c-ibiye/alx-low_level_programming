#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, But for multiples
 * of 3 & 5 print Fizz and Buzz and FizzBuzz for both
 *
 * Return: nothing
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzzz");
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
