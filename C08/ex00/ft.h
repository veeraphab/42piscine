#include <unistd.h>

#ifndef	FT_H_ 
#define	FT_H_

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1 ;
	while (s1[i++] != '\0' || s2[i++] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

#endif