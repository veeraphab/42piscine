#include "bsq.h"

void	parse_first_line(char *map_content, struct var *data, int *row,
		int *index1)
{
	*row = 0;
	while (map_content[*index1] >= '0' && map_content[*index1] <= '9')
	{
		*row = *row * 10 + (map_content[*index1] - '0');
		(*index1)++;
	}
	data->space = map_content[(*index1)++];
	data->obstruc = map_content[(*index1)++];
	data->sq = map_content[(*index1)++];
	while (map_content[*index1] != '\n')
		(*index1)++;
}
