#include "bsq.h"

int	**initialize_dp(int row, int col)
{
	int	**dp;
	int	i;

	i = 0;
	dp = (int **)malloc(row * sizeof(int *));
	if (!dp)
		return (0);
	while (i < row)
	{
		dp[i] = (int *)malloc(col * sizeof(int));
		if (!dp[i])
		{
			while (--i >= 0)
				free(dp[i]);
			free(dp);
			return (0);
		}
		i++;
	}
	return (dp);
}

void	fill_dp(char **map, int **dp, int row, int col, struct var data)
{
	int i = 0, j;

	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (map[i][j] == data.space)
			{
				if (i == 0 || j == 0)
					dp[i][j] = 1;
				else
					dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1])
						+ 1;
			}
			else
				dp[i][j] = 0;
			j++;
		}
		i++;
	}
}