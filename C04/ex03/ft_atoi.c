#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int check_minus(char *str)
{
	int n;

	n = 0;
	while (!(*str >= 48 && *str <= 57))
	{
		if (*str == '-')
		{
			n++;
		}
		str++;
	}
	if (n % 2 != 0)
	{
		return (-1);
	}
	return (1);
}

int ft_atoi(char *str)
{
	int nb = 0;
	int i;

	i = check_minus(str);
	while (*str)
	{
		while (*str >= 48 && *str <= 57)
		{
			nb *= 10;
			nb += *str - 48;
			str++;
			if (!(*str >= 48 && *str <= 57))
			{
				return (nb * i);
			}
		}
		str++;
	}
	return (nb * i);
}

int main(void)
{
	printf("%d", ft_atoi("  ---+--+1234ab567"));
	return 0;
}
