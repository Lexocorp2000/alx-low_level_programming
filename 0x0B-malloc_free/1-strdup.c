#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string
 * @str: input string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	{
	length++;
	}

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	return (NULL);

	for (i = 0; i <= length; i++)
	{
	duplicate[i] = str[i];
	}

	return (duplicate);
}
