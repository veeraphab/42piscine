int	ft_check(int nb, int div)
{
	if (div == 1)
		return (1);
	if (nb % div == 0)
		return (0);
	return (ft_check(nb, div - 1));
}
int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (ft_check(nb, nb - 1));
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
