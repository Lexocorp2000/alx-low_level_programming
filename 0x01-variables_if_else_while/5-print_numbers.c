#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main
 *
 * Description:  prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 *
 */
int main(void)
{
	int n;

	for (int i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	{
	putchar('\n');
	}

	return (0);
}
