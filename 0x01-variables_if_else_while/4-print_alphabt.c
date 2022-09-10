#include <stdio.h>
#include <unistd.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, followed\n
 * Return: 0 Always success
 */
int main(void)

{
	int ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
putchar('\n');
return (0);

}
