#include <stdio.h>

/**
 *main - Entry point
 *
 *  alphabet in int. and aphabet, followed by a new line
 *  Return: 0 (Success)
 */
int main(void)
{
	int i;
	char x;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
