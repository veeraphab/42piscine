int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 0 && index < 3)
		return (1);
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}
#include <stdio.h>
int main(void)
{
	for (int i = 0; i <= 20; i++)
		printf("%d, ", ft_fibonacci(i));
	return (0);
}
// Fn = Fn(n-1) + Fn(n-2)
