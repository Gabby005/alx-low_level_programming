#include <stdio.h>
#include <unistd.h>
#include <time.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase and uppercase, followed\n
 * Return: Always 0
 */
int main(void)

{
	int ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
putchar('\n');
return (0);

}
