#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}
// int main(void)
// {
//     ft_putstr("hello World");
//     return 0;
// }