#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (to_find[0] == '\0')
        return str; 

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (to_find[j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
            return &str[i]; 
        i++;
    }
    return (0); 
}


int main(void)
{
	char str[] = "I wanna go to New Zealand";
	char search[] = "x";
	char *p = ft_strstr(str, search);
	if (p != NULL)
	{
		printf("\nFound %s in str at positon %ld \n", search, p - str);
	}
	else
	{
		printf("\nNot found\n");
	}
	printf("\n%s\n", ft_strstr(str, search));
	printf("\n%s\n", strstr(str, search));
	return (0);
}

