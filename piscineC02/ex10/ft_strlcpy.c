#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
    int len;

	i = 0;
    len = 0;
	while (src[0] != 0 && size != 0)
	{
		*(dest + i) = src[i];
		// size--;
		i++;
        len++;
	}
	dest[i] = '\0';

	return (len);
}

int main(int argc, char const *argv[])
{
	char str[] = "Too Sweet";
    char dest[10];

	ft_strlcpy(dest, str, 10);
	printf("%s\n", dest);
	return 0;
}
