#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main  - entry point
 * Description: Print the last number of the numbers stored in the var
 * Return (0)
 */
int main(void)

{
	int n, m;

	Srand(time(0));
	n - rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m ! = 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %5 and is 0\n", n, m0;
	}
	return (0);

}


