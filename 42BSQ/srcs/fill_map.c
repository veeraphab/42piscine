#include "bsq.h"
void	fill_map(char **map, char *map_content, int index1)
{
	int	i = index1 + 1;
	int	k = 0;
	int	j;

	while (map_content[i])
	{
		j = 0;
		while (map_content[i] != '\n' && map_content[i])
			map[k][j++] = map_content[i++];
		map[k++][j] = '\0';
		i++;
	}
}