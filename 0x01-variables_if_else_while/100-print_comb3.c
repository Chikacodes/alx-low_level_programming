#include <stdio.h>

/**
* main - prints all possible different combination of numbers*
* Description:prints all possible different numbers of digits
* combinations of two digits.
* Numbers must be separated by ,, followed by a space
* Return: returns a sucess value
*/

int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{

	for (i = '0'; i <= '9'; i++)
	{
	if (c < i)
	{
		putchar(c);
		putchar(i);

	if (c != '8' || (c == '8' && i != '9'))
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}

	return (0);
}
