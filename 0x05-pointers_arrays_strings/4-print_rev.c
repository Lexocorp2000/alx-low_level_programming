#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @str: Pointer to the string to be printed in reverse.
 */
void print_rev(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
		for (int i = length - 1; i >= 0; i--)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
