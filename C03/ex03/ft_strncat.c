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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int len;
    int i;

    len = length(dest);
    i = 0;
    while (src[i] != '\0' && nb--)
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}

// int main(void)
// {
//     char a[] = "Mon";
//     char b[] = "tana!!";

//     ft_strncat(a, b,4);
//     // strncat(a,b,4);

//     printf("\n%s\n", a);
// }
