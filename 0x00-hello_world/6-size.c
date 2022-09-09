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

	printf("size of char:%d bytes\n", sizeof(charType));
	printf("size of int: %d bytes\n", sizeof(intType));
	printf("size of float: %d bytes\n", sizeof(floatType));
	printf("size of long long: %d bytes\n", sizeof(doubleType));
	printf("size of long: %d bytes\n", sizeof(longType));
	return (0);
}
