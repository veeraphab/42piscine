#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - ('a' - 'A');
		}
	while (str[i] != 0)
	{
		if (str[i] == ' ' || str[i] =='-')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i +1] = str[i + 1] - ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}

int main(int argc, char const *argv[])
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char name[] = "veeraphab sutthipibul kiw-vee";
	printf("\n%s\n", ft_strcapitalize(str));
	return 0;
}