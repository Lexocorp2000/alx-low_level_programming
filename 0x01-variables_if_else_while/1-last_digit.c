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
	int n, lastd;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digit of %d is %d and is 0\n");
	}
	else if (lastd < 6 && lastd ! = 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}	
