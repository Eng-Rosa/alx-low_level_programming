#include <stido.h>
/**
 * main - Entry point
 * Description: 'write alpha'
 * Return: always 0
*/
int main(void)
{

	int n;
	int m;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (m = 65; n <= 90; m++)
        {
                putchar(m);
        }
	putchar('\n');
	return (0);
}