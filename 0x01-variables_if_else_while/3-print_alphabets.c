#include <stdio.h>

/**
 * main - Entry
 *
 * Description: This function prints uppercase and lowercase.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' || letter <= 'Z'; letter++)
	{
		putchar(letter);

		if (letter == 'z')
		{
			letter = 'A' - 1;
		}
	}

	putchar('\n');


	return (0);
}
