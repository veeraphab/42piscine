#ifndef BSQ_H
#define	BSQ_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

struct var
{
	char	space;
	char	obstruc;
	char	sq;
	int		number;
	int		index1;
	int		row;
	int		col;
};
void	ft_putstr(char *str);
char	*map_input(char *filename);
char	**allocate_map(int row, int col);
void    display(char	**map, int row);
int	    **initialize_dp(int row, int col);
void	fill_dp(char **map, int **dp, int row, int col, struct var data);
void	fill_map(char **map, char *map_content, int index1);
void	find_max_square(int **dp, int row, int col, int *max_size, int *max_i, int *max_j);
void	fill_largest_square(char **map, int max_size, int max_i, int max_j, struct var data);
void	find_largest_square(char **map, int row, int col, struct var data);
void	free_map(char **map, int row, char	*map_content);
int		get_col_count(char *map_content, int index1);
int		min(int a, int b, int c);
void	parse_first_line(char *map_content, struct var *data, int *row, int *index1);
#endif