#include <stdio.h>

/**
* main - prints out digits
*
* Description: main prints digits of numbers from 0 to 9
* using putchar
* Return: returns a succes value
*/

int main(void)
{
	int digit_s;

	for (digit_s = '0'; digit_s <= '9'; digit_s++)
	{
		putchar(digit_s);

		if (digit_s >= 8)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar(10);

	return (0);
}
