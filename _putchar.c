#include <unistd.h>

/**
 * _putchar - write ch to stdout
 * @ch: character
 *
 * Return: 1 (success), else -1 (with the appropriate error set
 */
int _putchar(char *ch)
{
	return (write(1, &ch, 1));
}
