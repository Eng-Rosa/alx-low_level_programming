#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: on success 1.
 *  on error, -1 is returned. and error no is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
