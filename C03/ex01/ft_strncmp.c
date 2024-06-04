#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned n)
{
    int i;

    i = 0;
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

int main(int argc, char const *argv[])
{
    char *a = "Ab 0";
    char *b = "Ab b";
    printf("\nform strcmp = %d\n", strncmp(a, b, 1));
    printf("form ftstrcmp = %d\n", ft_strncmp(a, b, 1));
    return 0;
}
