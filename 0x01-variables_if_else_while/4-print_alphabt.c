#include <stdio.h>

/**
 * main - prints out lower case letters
*
* Description:main prints out lower case alphabet except
* letter e and q, using putchar
* Return: returns a sucess value
*/

int main(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		if (alphabet != 113 && alphabet != 101)
		{
		putchar(alphabet);
		}
	}

	putchar(10);

	return (0);
}
