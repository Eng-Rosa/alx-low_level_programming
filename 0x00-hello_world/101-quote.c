#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print using write function
 *      write(int fd,const void buf,size_t count)
 *
 * Return: 1(not success)
*/

int main(void)
{
	char que[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, que, 59);
	return (1);
}
