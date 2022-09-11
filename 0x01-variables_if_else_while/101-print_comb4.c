#include <stdio.h>

/**
* main - prints out 3 combination digits
*
* Description: prints out all possible diffierent combination* of 3 digits number.
* Return: returns a sucess value always
*/

int main(void)
{
	int c, n, m;

	for (c = '0'; c <= '9'; c++)
	{

		for (n = '0'; n <= '9'; n++)
		{

			for (m = '0'; m <= '9'; n++)
			{

				if (c < n && n < m)
				{
					putchar(c);
					putchar(n);
					putchar(m);

					if (c != '7')
					{
						putchar(',');

						putchar(' ');
					}
				}
			}
		}
	}

	putchar(0);

	return (0);
}

