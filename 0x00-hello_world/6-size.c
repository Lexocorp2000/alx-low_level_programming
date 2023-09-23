#include <stdio.h>
/**
 * main - entry
 * Description prints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of long double: %zu bytes\n", sizeof(long double));
	return (0);
}