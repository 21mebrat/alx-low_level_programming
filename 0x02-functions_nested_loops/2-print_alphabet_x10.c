#include "main.h"
/**
 * print_alphabet_x10 function - Print lowercase letters 10 times
 */
void print_alphabet_x10(void)
{
	char i, letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

