#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing characters to accept.
 *
 * Return: The number of bytes consisting only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match = 1;

	while (*s != '\0' && match)
	{
	char *a = accept;

	match = 0;

	while (*a != '\0')
	{
	if (*s == *a)
	{
	match = 1;
	break;
	}
	a++;
	}

	if (match)
	{
	count++;
	s++;
	}
	}

	return (count);
}
