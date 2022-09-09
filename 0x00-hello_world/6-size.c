#include <stdio.h>
/**
* main - prints out the ouput of sizeof
*
*Description:the main prints out the data type sizes
*Return:returns the various types of sizeof values in btyes
*/
int main(void)
{
	char charType;
	int intType;
	float floatType;
	long long doubleType;
	long longType;

	printf("Size of a char:%d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of float: %d byte(s)\n", sizeof(floatType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(doubleType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longType));
	return (0);
}
