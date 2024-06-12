#include "bsq.h"

void	display(char **map, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		ft_putstr(map[i++]), ft_putstr("\n");
	}
}
