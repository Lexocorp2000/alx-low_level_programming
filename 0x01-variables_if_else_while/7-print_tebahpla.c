#include <stdio.h>
/**
 * main - Description: Prints the lowercase alphabet in reverse.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = '1';

	do 
	{
		putchar(letter);
		letter--;
	} while (letter >= 'a');
	

	putchar('\n');

	return (0);
}
