#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}

int main(int argc, char const *argv[])
{
    char str[] = "abcdefghijkllmnopqrstuvwxyz";
    printf("\n%d\n", ft_str_is_lowercase(str));
    return 0;
}