#include <stdio.h>
#include <string.h>

unsigned int length(const char *str)
{
	unsigned int len = 0;
	while (str[len])
	{
		len++;
	}
	return len;
}

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int len_d = length(dest);
	unsigned int len_s = length(src);
	unsigned int i;

	
	if (size <= len_d)
	{
		return size + len_s;
	}

	
	i = 0;
	while (i + len_d + 1 < size && src[i] != '\0')
	{
		dest[len_d + i] = src[i];
		i++;
	}

	
	dest[len_d + i] = '\0';

	
	return len_d + len_s;
}
int main(void)
{
	int size = 10;
	char a[128] = "Too ";
	char b[] = "Sweet!!!";

	char x[128] = "Too ";
	char y[] = "Sweet!!!";

	int l = ft_strlcat(a, b, size);
	int l1 = strlcat(x, y, size);
	printf("\n%d, %s\n", l, a);
	printf("\n%d, %s\n", l1, x);
}
