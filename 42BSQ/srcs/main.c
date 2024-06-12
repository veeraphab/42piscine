#include "bsq.h"
int	main(int ac, char *av[])
{
	char		*map_content;
	char		**map;
	struct var	data;

    data.number = 0;
	if (ac < 2)
		return (write(1, "Usage: ./bsq <filename>\n", 24), 1);
    while (++data.number < ac)
    {
    map_content = map_input(av[data.number]);
	if (!map_content)
		return (write(1, "Error to open file\n", 19), 1);
	data.index1 = 0;
	parse_first_line(map_content, &data, &data.row, &data.index1);
	data.col = get_col_count(map_content, data.index1);
	map = allocate_map(data.row, data.col);
	if (!map)
		return (free(map_content), write(1, "Memory allocation error\n", 24), 1);
	fill_map(map, map_content, data.index1);
	find_largest_square(map, data.row, data.col, data);
	display(map, data.row);
	free_map(map, data.row, map_content);
    }
    return (0);
}