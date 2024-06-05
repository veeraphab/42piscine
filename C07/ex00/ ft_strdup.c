#include <stdlib.h>
int	ft_strlen(char *src)
{
	int len;

	len = 0;
	while (*src++)
	{
		len++;
	}
	return (len);
}
char	*ft_strdup(char *src)
{
	char	*dest;
	int 	i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == 0)
		return (0);
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char source[] = "I am groot.";
	char *target = ft_strdup(source);
	printf("target = %s\n", target);
	free(target);
}
