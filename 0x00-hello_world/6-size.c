/**
 * main - main block
 * Return: 0
*/
#include <stdio.h>

int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("Size of int: %i byte(s)\n", sizeof(int));
	printf("Size of long: %i byte(s)\n", sizeof(long int));
	printf("Size of float: %i byte(s)\n", sizeof(float));
	printf("Size of long double: %i byte(s)\n", sizeof(long long int));
	return (0);
}
