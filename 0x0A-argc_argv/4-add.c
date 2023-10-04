#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive_number - Check if a string represents
 * a positive number
 * @s: The string to check
 * Return: 1 if positive, 0 otherwise
 */
int is_positive_number(char *s)
{
	while (*s)
	{
	if (*s < '0' || *s > '9')
	return (0);
	s++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
	if (is_positive_number(argv[i]))
	sum += atoi(argv[i]);
	else
	{
	printf("Error\n");
	return (1);
	}
	}

	printf("%d\n", sum);

	return (0);
}
