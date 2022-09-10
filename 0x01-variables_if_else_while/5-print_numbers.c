#include <stdio.h>
#include <unistd.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Write a program that prints all less than base ten\n
 * Return: (0) Always
 */
int main(void)

{
	int n;


	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
putchar('\n');
return (0);

}
