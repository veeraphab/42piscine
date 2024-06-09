#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
	 write(1, "\n", 1);
}
int	main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc > 1)
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	return 0;
}