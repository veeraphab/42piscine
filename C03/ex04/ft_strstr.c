#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int positon;

	i = 0;
	j = 0;
	positon = 0;
	while (str[i] != 0)
	{
		if (to_find[j] == str[i])
		{
			positon = i;
			while (to_find[j] != 0)
			{
				if (to_find[j] != str[i + j])
				{
					return (0);
				}
				j++;
			}
		}
		i++;
	}
	return (str + positon);
}

int main(void)
{
	char str[] = "I wanna go to New Zealand";
	char search[] = "land";
	char *p = ft_strstr(str, search);
	if (p != NULL)
	{
		printf("\nFound %s in str at positon %ld \n", search, p - str);
	}
	else
	{
		printf("\nNot found\n");
	}
	printf("\n%s\n", ft_strstr(str, search));
	printf("\n%s\n", strstr(str, search));
	return (0);
}
