#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= '0' && str[i] <= '9')
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
    char str[]= "1253456789";
    printf("\n%d\n", ft_str_is_numeric(str));
    return (0);
}