#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: 0 
 */
int main(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (a = j + 1; a <= 9; a++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(a + '0');
				if (i != 7 || j != 8 || a != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');

	return (0);
}





	
