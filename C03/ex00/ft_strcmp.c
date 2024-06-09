int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0 ;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
// 	char *a = "hello";
// 	char *b = "helllo";
// 	printf("\nform strcmp = %d\n", strcmp(a, b));
// 	printf("form ftstrcmp = %d\n", ft_strcmp(a, b));
// 	return 0;
// }
