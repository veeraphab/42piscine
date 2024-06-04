#include <stdio.h>
#include <unistd.h>
char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i]!=0)
	{
		*(dest + i) = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
int main(int argc, char const *argv[])
{
	char c[] = "hello";
	char a[30];

	ft_strcpy(a, c);
	printf("%s\n", a);
	// write(1,a,7);
	return 0;
}
