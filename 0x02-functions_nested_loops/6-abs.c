#include "main.h"

/**
 * _abs - func that copmuts abs
 *
 * @n: takes in int type
 *
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
