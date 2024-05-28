#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2, int n)
{
    int i;
    int cmp;

    i = 0;
    while (n--)
    {
        if (s1[i] != s2[i])
        {
            cmp = s1[i] - s2[i];
            return (cmp);
        }
        i++;
    }
    return (0);
}

int main(int argc, char const *argv[])
{
    char *a = "Ab 0";
    char *b = "Ab b";
    printf("\nform strcmp = %d\n", strncmp(a, b, 3));
    printf("form ftstrcmp = %d\n", ft_strcmp(a, b, 3));
    return 0;
}
