#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints lowercase alphabet.
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
