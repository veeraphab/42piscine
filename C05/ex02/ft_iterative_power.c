int ft_iterative_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	int exponent;

	exponent = 1;
	while (power-- > 0)
		exponent *= nb;
	return (exponent);
}
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(3, 3));
	return 0;
}