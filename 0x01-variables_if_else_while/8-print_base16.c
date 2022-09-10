#include <stdio.h>

/**
* main - prints out hexadecimal number
*
*Description:main prints out hexadecimal numbers followed
* by a new line.
* Return:returns zero value
*/

int main(void)
{
	int letter;
	char digit_s;

	for (digit_s = '0'; digit_s <= '9'; digit_s++)
	{
	putchar(digit_s);
	}

	for (letter = 97; letter <= 102; letter++)
	{
	putchar(letter);
	}
	putchar(10);

	return (0);
}
