#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	x[10];
	int	i;

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		x[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, x + i, 1);
		i--;
	}
}
void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}
void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
	}
}
// #include "ft_strs_to_tab.c"
// #include <stdlib.h>

// int	main(int ac, char **av)
// {
// 	struct s_stock_str	*stock;

// 	stock = ft_strs_to_tab(ac - 1, av + 1);
// 	if (stock)
// 	{
// 		ft_show_tab(stock);
// 		for (int i = 0; i < ac - 1; i++)
// 			free(stock[i].copy);
// 		free(stock);
// 	}
// 	return (0);
// }
