#include "bsq.h"
int		get_col_count(char *map_content, int index1)
{
	int	col = 0;
	while (map_content[index1 + col + 1] != '\n')
		col++;
	return col;
}