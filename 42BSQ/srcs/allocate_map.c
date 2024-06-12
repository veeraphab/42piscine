#include "bsq.h"

char	**allocate_map(int row, int col)
{
	char	**map;
	int		i;

	map = (char **)malloc(row * sizeof(char *));
	if (!map)
		return (0);
	i = 0;
	while (i < row)
	{
		map[i] = (char *)malloc((col + 1) * sizeof(char));
		if (!map[i])
		{
			while (--i >= 0)
				free(map[i]);
			free(map);
			return (0);
		}
		i++;
	}
	return (map);
}
