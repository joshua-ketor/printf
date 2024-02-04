#include "main.h"

/**
 * _printf - custom printf clone
 * @format: format
 *
 * Return: Nothing
 */
void _printf(const char *format, ...)
{
	va_list args;


	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 's':
					char *string = va_arg(args, char *);
					_write_string(string);
					break;

				case 'd':
					int num = va_arg(args, int);
					_write_int(num);
					break;

				default:
					_putchar(*format);
					break;
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	va_end(args);
}
