#include <stdio.h>
/**
 * main - Entry point
 * Description: 'write alpha'
 * Return: always 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
