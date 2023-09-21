#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet speak).
 * @str: The input string to be encoded.
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_dict[] = "aAeEoOtTlL";
	char leet_replacement[] = "443370711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; leet_dict[j] != '\0'; j++)
	{
	if (str[i] == leet_dict[j])
	{
	str[i] = leet_replacement[j];
	break;
	}
	}
	}

	return (str);
}
