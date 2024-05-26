#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a'-'A');
		}
		i++;
	}
	return (str);
}
int main(int argc, char const *argv[])
{
	char str[] = "Veeraphab Sutthipbul BKK";
	printf("\n%s\n", ft_strupcase("K I W"));
	return 0;
}