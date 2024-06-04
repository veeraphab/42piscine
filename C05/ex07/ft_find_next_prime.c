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
int	ft_find_next_prime(int nb)
{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			return ft_find_next_prime(nb + 1);
}
#include <stdio.h>
int main(void)
{
	printf("\nNext prime number is %d\n", ft_find_next_prime(90));
}
