#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4};
	int *p;

	p = a;
	*(p + 2) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
