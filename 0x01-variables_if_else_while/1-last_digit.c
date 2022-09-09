#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: Print the last of the number stored in var
 * Return: 0
 */
int main(void)
{
	int n;

	Srand(time(0))
	n = rand - RAND_MAX / 2;
	m - n % 10;

	{
		printf("Last digit of %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && ! = 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d and is %d and is 0\n", n, m);
	}
	return (0);
