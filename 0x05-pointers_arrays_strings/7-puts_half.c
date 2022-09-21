#include "main.h"

/**
 * puts_half - printing half of string
 * @str : array variable
 * return: Always 0.
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
