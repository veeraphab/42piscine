#include <stdio.h>
#include <unistd.h>

void ft_putchar(char *c)
{
    write(1, c, 1);
}

void ft_putstr_non_printable(char *str)
{
    int a;
    int b;
    char *Hex;

    Hex = "0123456789abcdf";
    while (*str != 0)
    {
        if (*str >= 32 && *str != 127)
        {
            ft_putchar(str);
        }
        else
        {
            ft_putchar("\\");
            a = *str / 16;
            b = *str % 16;
            ft_putchar(&Hex[a]);
            ft_putchar(&Hex[b]);
        }
        str++;
    }
}

int main(int argc, char const *argv[])
{
    char str[] = "Coucou\ntu vas bien ?";
    printf("\n");
    ft_putstr_non_printable(str);

    return 0;
}