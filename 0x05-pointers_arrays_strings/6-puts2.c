#include "main.h"
/**
 * puts2 - function outht to print only one char from two chars
 * starting from the first one
 * @str: acepted
 * Return: print
 */
void puts2(char *str)
{
	int x = 0;
	int z = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		x++;
	}
	z = x - 1;
	for (i = 0 ; i <= z ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
