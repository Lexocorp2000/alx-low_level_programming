#ifndef MAIN_H
#define MAIN_H

/* Protype for the _putchar function */
int _putchar(char c);

/* Prototype for the print_alphabet_x10 function */
void print_alphabet_x10(void);

#endif /* MAIN_H */
#include <unistd.h>
#include "main.h"

/**
 * _putchar - Custom putchar function
 *
 * @c: The character to print
 *
 * Return: On success, returns the number of characters written (1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
	char letter;

	for  (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
}
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();

	return (0);
}
