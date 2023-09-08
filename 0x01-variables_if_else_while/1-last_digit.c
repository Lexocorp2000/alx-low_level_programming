#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: This is the main program that  will assign a random number to the variable 'n' each time it is executed,
 * complete the source code in order to print the last digit of the number stored in the variable 'n'.
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
