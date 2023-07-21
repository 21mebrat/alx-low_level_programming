#include "main.h"
/**
 * _isdigit - check is it number or not
 * @c: char to be checked
 *
 * Return: 1 if number else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

