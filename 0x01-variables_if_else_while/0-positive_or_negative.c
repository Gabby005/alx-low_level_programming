#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - entry point
 *  Description - Prints if the number is negative or positive
 *  Return: 0
 */

int main(void)


{	
	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	
	{

		printf("%d is positive\", n);

	}

	else if (n == 0)

	{
		printf("%d is xero\n", n);

	}

	else if (n < 0)

	{
		printf("%d is negative\n". n);

	}
	return (0);

}
