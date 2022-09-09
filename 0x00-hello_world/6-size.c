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
	double doubleType;

	printf("size of char:%zu bytes\n", sizeof(charType));
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of double: %zu bytyes\n", sizeof(doubleType));
	return (0);
}
