#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: zero (Success)
 */
int main(void)
{
	char leter[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(leter[i]);
	}
	putchar('\n');
	return (0);
}

