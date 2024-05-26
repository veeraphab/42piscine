#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;
	while (src[0] != 0 && n != 0)
	{
		*(dest + i) = src[i];
		n--;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

int main(int argc, char const *argv[])
{
	char str[] = "Too Sweet";
	char a[128];

	ft_strncpy(a, str, 3);
	printf("\n%s\n", a);

	return 0;
}
