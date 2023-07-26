#include "main.h"
/**
 * string_toupper - a function that change all lowercase to uppercase
 * @n: pointer varible
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}
