int	ft_iterative_factorial(int nb)
{
	int	factorail;

	factorail = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		factorail  *= nb;
		nb--;
	}
	return (factorail);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_factorial(0));
	return 0;
}
