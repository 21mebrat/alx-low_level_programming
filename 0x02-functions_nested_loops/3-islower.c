#include "main.h"
/**
 * _islower - Checks for lowercase letters
 * @c: Letter shoud be checked 
 * Return: if a letter if it is a lower letter otherwise not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

