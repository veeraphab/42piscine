#include <stdlib.h>

int	length(char *dest)
{
	int	len;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = length(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sum_length;
	char	*buf;

	if (size <= 0)
	{
		buf = (char *)malloc(1);
		if (!buf)
			return (0);
		buf[0] = '\0';
		return (buf);
	}

	i = 0;
	sum_length = 0;
	while (i < size)
		sum_length += length(strs[i++]) + length(sep);
	sum_length -= length(sep);
	buf = (char *)malloc(sum_length + 1);
	buf[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(buf, strs[i++]);
		if (i < size)
			ft_strcat(buf, sep);
	}
	return (buf);
}
#include <stdio.h>

// int	main(void)
// {
// 	char	*planets[] = {"Mercury", "Venus", "Earth", "Mar", "Jupiter","Saturn"};
// 	char	*str;

// 	str = ft_strjoin(6, planets, "->");
// 	printf("\n%s\n", str);
// 	free(str);
// 	return (0);
// }
