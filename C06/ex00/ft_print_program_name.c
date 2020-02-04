
#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str == '\0')
	{
		write(1, &a, 1);
		str++;
	}
}


void main(int argc, char *argv[])
{
	putstr(*argv[0]);
}
