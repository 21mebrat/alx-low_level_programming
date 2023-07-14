#include <stdio.h>
/* the function main diplays or prints the alphabates and returns zero*/
int main(void)
{
	char le[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(le[i]);
	}
	putchar('\n');
	return (0);
}

