#include "holberton.h"
/**
 * main - Entry point
 * Description: Write a program that prints _putchar, followed by a new line
 * Return: Always 0 success
 */
int main(void)

{
char str[] = "holberton\n";
int i = 0;

while (str[i] !='\n')
	{
	char c = str[i];

	_putchar(c);
	}
return(0);

}
