#include <stdio.h>

/**
* main - main uses putchar to print out result
*
* Description: main prints out the alphabet in lowercase
* followed by a new line using putchar function.
* Return: returns zero
*/

int main(void)
{
	int alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)
	{
	putchar(alphabet);
	}
	putchar(10);

	return (0);
}
