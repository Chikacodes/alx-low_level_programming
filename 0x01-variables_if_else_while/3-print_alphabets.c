#include <stdio.h>

/**
* main - outputs upper and lower case letter
*
* Description: main prints both upper and lower case alphabe
* Return: returns zero value always
*/

int main(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
	putchar(alphabet);
	}

	for (alphabet = 65; alphabet <= 90; alphabet++)
	{
	putchar(alphabet);
	}
	putchar(0);

	return (0);
}
