#include <stdio.h>
/**
 * main - Description: prints all the numbers of base 16 in lowercase.
 * Return: 0 (Success)
 */

int main(void)
{
	
	char digit;

	int i;

	for (i = 0; i <= 15; i++)
	{
		if (i < 10)
			digit = i + '0';
		else
			digit = i - 10 + 'a';
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
