#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: This is the main function that generates a random number,
 * checks if it is positive, negative, or zero, and print the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else
		printf("zero\n");
	return (0);
}
