#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int n;
	char letter = 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}

	putchar('\n');

	return (0);
}
