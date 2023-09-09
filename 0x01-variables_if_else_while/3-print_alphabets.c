#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This is program prints the alphabet in lowercase,
 * and then in uppercasefollowed by a new line
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	for (int i = 0; i < 26; i++)
	{
	putchar(lowercase);
	lowercase++;
	}

	for (int i = 0; i < 26; i++)
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar('\n');

	return (0);
}
