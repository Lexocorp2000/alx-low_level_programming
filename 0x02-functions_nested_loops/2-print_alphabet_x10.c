#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

void print_alphabet_x10(void);

#endif 

#include "main.h"

/**
 * Print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 * Return: 0 (Success)
 */
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
		printf_alphabet();
	}
}

