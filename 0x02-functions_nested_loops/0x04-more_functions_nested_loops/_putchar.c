#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the letter c to stdout
 * @c: The letters to print
 *
 * Return: On success 1.
 * On error, -1 is returned,if no error is ocurred set correctly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
