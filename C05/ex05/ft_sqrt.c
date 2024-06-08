int	ft_sqrt(int nb)
{
	long int	sq;
	long int	i;
    long int	nbl;

	nbl = nb;
	i = 0;
	if (nbl == 0)
		return (0);
	while (i * i <= nbl)
	{
		sq = i * i;
		if (sq == nbl)
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
