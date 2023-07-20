#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 * @c:letter to be checked
 * Return: 1 if c is a letter, if not returns 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

