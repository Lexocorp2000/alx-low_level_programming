#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int n;
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
	putchar(letter);
	}
	letter++;
	}

	putchar('\n');

	return (0);
}
