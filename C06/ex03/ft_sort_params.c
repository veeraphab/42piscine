#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	if (argc > 1)
		while (++i < argc - 1)
		{
			j = 0;
			while (++j < argc - i)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					copy = argv[j];
					argv[j] = argv[j + 1];
					argv[j + 1] = copy;
				}
			}
		}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
	}
	return (0);
}