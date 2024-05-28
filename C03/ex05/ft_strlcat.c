#include <stdio.h>
#include <string.h>

int length(char *dest)
{
	int len;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	return (len);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int len_d;
	int len_s;
	int i;

	len_d = length(dest);
	len_s = length(src);
	i = 0;
	while (size < len_d)
	{
		len_d--;
	}
	while (size-- > len_d + 1)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	return (len_d + len_s);
}

int main(void)
{
	int size = 20;
	char a[128] = "Too ";
	char b[] = "Sweet!!!";

	char x[128] = "Too ";
	char y[] = "Sweet!!!";

	int l = ft_strlcat(a, b, size);
	int l1 = strlcat(x, y, size);
	printf("\n%d, %s\n", l, a);
	printf("\n%d, %s\n", l1, x);
}
