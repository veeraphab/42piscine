#include "bsq.h"

void	find_max_square(int **dp, int row, int col, int *max_size, int *max_i, int *max_j)
{
	int	i = 0, j;

	*max_size = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (dp[i][j] > *max_size)
			{
				*max_size = dp[i][j];
				*max_i = i;
				*max_j = j;
			}
			j++;
		}
		i++;
	}
}

void	fill_largest_square(char **map, int max_size, int max_i, int max_j, struct var data)
{
	int	i = max_i;
	int	j;

	while (i > max_i - max_size)
	{
		j = max_j;
		while (j > max_j - max_size)
			map[i][j--] = data.sq;
		i--;
	}
}

void	find_largest_square(char **map, int row, int col, struct var data)
{
	int	**dp;
	int	max_size, max_i, max_j;

	dp = initialize_dp(row, col);
	if (!dp)
		return;
	fill_dp(map, dp, row, col, data);
	find_max_square(dp, row, col, &max_size, &max_i, &max_j);
	fill_largest_square(map, max_size, max_i, max_j, data);

	int i = 0;
	while (i < row)
		free(dp[i++]);
	free(dp);
}