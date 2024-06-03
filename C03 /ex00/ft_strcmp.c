#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp;

	i = -1 ;
	while (s1[i++] != '\0' || s2[i++] != '\0')
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			return (cmp);
		}
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	char *a = "abc ";
	char *b = "1ab c";
	printf("\nform strcmp = %d\n", strcmp(a, b));
	printf("form ftstrcmp = %d\n", ft_strcmp(a, b));
	return 0;
}
