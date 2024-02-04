#include "main.h"

/**
 * _write_string - write string to stdout
 * @str: pointer to string
 *
 * Return: Nothing
 */
void _write_string(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}

/**
 * _write_int - write int to stdou
 * @num: num to write
 *
 * Return: Nothing
 */
void _write_int(int num)
{
	char *buffer, *p;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	buffer = malloc(sizeof(int) * 3);
	p = buffer + 11;
	*p = '\0';

	while (num > 0)
	{
		p--;
		*p = '0' + num % 10;
		num /= 10;
	}

	_write_string(p);
	free(buffer);
}
