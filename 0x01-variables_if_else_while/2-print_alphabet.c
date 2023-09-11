#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
