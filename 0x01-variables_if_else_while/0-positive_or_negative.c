#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: Check n's sign
 * print whether it's positive, negative or zero.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("is positive\n");
}
	else if (n < 0)
{
	printf("is negative\n");
}
	else
{
	printf("is zero\n");
}
	return (0);
}
