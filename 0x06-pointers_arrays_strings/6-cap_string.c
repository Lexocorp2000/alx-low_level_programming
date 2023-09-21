#include "main.h"
#include <stdbool.h>
/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 * Return: true if it's a separator, false otherwise.
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
	if (c == separators[i])
	return (true);
	}

	return (false);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	bool capitalize_next = true;

	while (str[i] != '\0')
	{
	if (is_separator(str[i]))
	{
	capitalize_next = true;
	}
	else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 'a' + 'A';
	capitalize_next = false;
	}
	else
	{
	capitalize_next = false;
	}

	i++;
	}

	return (str);
}
