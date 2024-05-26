#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char unable[] = "ฟหกด";
	printf("\n%d\n", ft_str_is_printable(str));
	return 0;
}