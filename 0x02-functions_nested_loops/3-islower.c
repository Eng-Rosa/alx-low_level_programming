#include "main.h"

/**
 * _islower - func to check if
 *            char is lowercase
 *
 * @c: checks input of func
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

