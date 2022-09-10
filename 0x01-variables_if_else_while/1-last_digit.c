#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - main outputs the value of n and last digit
*
*Description: main generates the value of n and last digit
*base on the given condition using if esle statement
*Return: returns zero
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
