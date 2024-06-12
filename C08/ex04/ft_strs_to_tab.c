#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (*src++)
	{
		len++;
	}
	return (len);
}
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == 0)
		return (0);
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	if (ac <= 0)
		return (NULL);
	stock = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].size = ft_strlen(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].copy = 0;
	stock[i].size = 0;
	return (stock);
}
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*stock;
// 	int			i;

// 	stock = ft_strs_to_tab(argc - 1, argv + 1);
// 	if (!stock)
// 	{
// 		printf("Error allocating memory\n");
// 		return (1);
// 	}
// 	for (i = 0; stock[i].str != NULL; i++)
// 	{
// 		printf("Original String: %s\n", stock[i].str);
// 		printf("Copied String: %s\n", stock[i].copy);
// 		printf("String Length: %d\n", stock[i].size);
// 		printf("-----------------------------\n");
// 	}

// 	for (i = 0; stock[i].str != NULL; i++)
// 	{
// 		free(stock[i].copy);
// 	}
// 	free(stock);
// 	return (0);
// }
