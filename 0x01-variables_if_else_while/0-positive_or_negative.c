#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /2;
	printf("%d", n);
	if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else 
		printf("zero\n");
	return (0);
}
