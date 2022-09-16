#include "main.h"

/**
 * main - _isalpha is the entry poin
 * Description:  Function that checks for alphabetic character
 * @c: is the int that will use for the argument of the function
 * Return: 1 if true. 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);

}
