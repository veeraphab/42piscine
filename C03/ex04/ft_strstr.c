#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (str[i] != 0)
    {
        if (to_find[j] == str[i])
        {
            while (to_find[j] != 0)
            {
                if (to_find[j] != str[i + j])
                {
                    return (0);
                }
                else
                {
                    return (str + i);
                }
                j++;
            }
        }i++;
    }

    return (0);
}

int main(int argc, char const *argv[])
{
    char str[] = "I wanna go to New Zealand";
    char search[] = "New Zealand";
    char *p = ft_strstr(str, search);
    if (p != NULL)
    {
        printf("\nFound %s in str at positon %ld \n", search, p - str);
    }
    else
    {
        printf("\nNot found\n");
    }
    
    printf("\n%s\n", strstr(str, search));
    return (0);
}
