int	ft_check(long int nb, long int div)
{
	if (div * div > nb)
		return (1);
	if (nb % div == 0)
		return (0);
	return (ft_check(nb, div + 1));
}
int	ft_is_prime(int nb)
{
	long int nbl;

	nbl = nb;
	if (nbl <= 1)
		return (0);
	return (ft_check(nbl, 2));
}

#include <stdio.h>
int main(void)
{
	for (int i = 0; i <= 100; i++)
	{
		int nb = ft_is_prime(i);
		if (nb == 1)
			printf("%d is prime number\n", i);
		else
			printf("%d isn't prime number\n", i);
	}
	return 0;
}
