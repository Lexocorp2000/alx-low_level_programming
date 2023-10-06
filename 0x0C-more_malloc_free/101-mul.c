#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_positive_number - Check if a string represents a positive number
 * @s: The string to check
 * Return: 1 if positive, 0 otherwise
 */
int is_positive_number(char *s)
{
	while (*s)
	{
	if (!isdigit(*s))
	return (0);
	s++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	unsigned long num1, num2, result;

	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);
	result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}
