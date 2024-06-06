int	ft_sqrt(int nb)
{
	int sq;
	int i;

	i = 0;
	if (nb == 0)
		return (0);
	while (i * i <= nb)
	{
		sq = i * i;
		if (sq == nb)
			return (i); 
		i++;
	}
	return (0);
}
#include <stdio.h>
int main(void)
{
	printf("%d", ft_sqrt(-16));
	return 0;
}
