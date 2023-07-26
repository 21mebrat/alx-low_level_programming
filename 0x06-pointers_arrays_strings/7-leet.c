#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes
 * @s: pointer varible to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
				break;
			}
		}
	}
	return (s);
}
