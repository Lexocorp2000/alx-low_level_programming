#include "main.h"
/**
 * _islower - Checks lowecases
 * @c: The character is to be checked.
 * Return: 1 if c is lowercase, otherwise.
 */
int _islower(int c);
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
