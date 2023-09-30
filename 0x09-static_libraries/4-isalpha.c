#include "main.h"
/**
 * _isalpa - checks the alphabetic characters
 * @c: the character to br checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
