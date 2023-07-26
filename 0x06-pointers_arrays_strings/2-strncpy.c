#include "main.h"
/**
 * _strncpy - a function that copy a string
 * @dest: destination varible
 * @src: source varible
 * @n: varible holds bytes of source
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
