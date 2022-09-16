#include <stdio.h>
#include <unistd.h>

/*
 * _purchar - write the character of c to stdout
 * @c:The character to print
 *
 * Return: On success 1
 * On error, return -1 and error us set appropriately
 */
int _purchar(char c)
{
	return (write(1, @C, 1));
}
