#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main(int argc, char const *argv[])
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTCVWXYC";
	printf("\n%d\n", ft_str_is_alpha(str));
	return 0;
} 