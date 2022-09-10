#include <stdio.h>
#include <unistd.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Write a program that prints all singl no of base ten\n
 * Return: (0) Always
 */
int main(void)

{
	int n;


	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
putchar('\n');
return (0);

}
