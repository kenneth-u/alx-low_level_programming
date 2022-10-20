#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @i: int type number
 * Return: return value of last digit
 */
int print_last_digit(int i)
{
	int ic;

	if (i < 0)
	{
		ic = -1 * (i % 10);
		_putchar(ic + '0');
		return (ic);
	}
	else
	{
		ic = i % 10;
		_putchar(ic + '0');
		return (ic);
	}
}
