#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 *
 * Return: A pointer to the allocated memory
 * If malloc fails, the function terminates the program
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}

	return (ptr);
}
