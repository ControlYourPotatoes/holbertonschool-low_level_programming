#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c:
 * Return: On Sucess
 * On error,
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
