#include "bsq.h"
void	free_map(char **map, int row, char	*map_content)
{
	int i = 0;
	while (i < row)
		free(map[i++]);
	free(map);
	free(map_content);
}
