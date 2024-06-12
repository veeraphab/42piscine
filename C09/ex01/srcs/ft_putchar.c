#include <unistd.h>

void    ft_putstr(char c)
{
		write(1, &c, 1);
}