#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

void print_alphabet_x10(void);

#endif /* MAIN_H */ 

#include "main.h"

/**
 * Print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 * Return: 0 (Success)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}


void print_alphabet(void)
{
	char letter;
	for  (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
}

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

#include "main.h"

int main(void)
{
	print_alphabet_x10();

	return (0);
}
