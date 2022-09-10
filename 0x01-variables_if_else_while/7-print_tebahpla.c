#include <stdio.h>                                                                                                                                   
#include <unistd.h>                                                                                                                                  
#include <time.h>

/**
 * main - Entry point
 * Description: Write a program that prints the lowercase alphabet in reverse
 * Return: 0 Always
 */
int main(void)

{
	int a;


	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
putchar('\n');
return (0);

}

