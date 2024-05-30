#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}
// int main(void)
// {
// 	char str[] = "hello world";
// 	printf("length form ft_strlen = %d\n", ft_strlen(str));
// 	printf("length form strlen = %lu\n", strlen(str));
// 	return 0;
// }
