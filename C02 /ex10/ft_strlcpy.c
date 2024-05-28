#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int len;

	i = 0;
	len = 0;
	if (size == 0)
	{
		dest[0] = '\0';
	}
	else
	{   size--;
		while (src[i] != 0 && size--)
		{
			*(dest + i) = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (src[len] != 0)
	{
		len++;
	}
	return (len);
}

int main(int argc, char const *argv[])
{
	char str[] = "Too Sweet!!";
	char dest[128];
	int len = ft_strlcpy(dest, str,6);
	// int len_strlcpy = strlcpy(dest,str,2);
	printf("\nOriginal len = %d, %s\n", len, dest);
	// printf("\nOriginal len = %d, %s\n", len_strlcpy, dest);
	return 0;
}
