#include <main.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: The input string to be printed.
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
