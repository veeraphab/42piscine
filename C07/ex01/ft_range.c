#include <stdlib.h>
int *ft_range(int min, int max)
{
    int *nb;
    int i;

    if (min >= max)
        return (0);
    nb = (int *)malloc((max - min) * 4);
    i = 0;
    if (nb == 0)
        return 0;
    while (min < max)
    {
        nb[i] = min++;
        i++;
    }
    return (nb);
}
#include <stdio.h>
int main(void)
{
    int max = 20;
    int min = 5;
    int *nb = ft_range(min, max);
    if (nb == NULL)
        return 0;
    for (int i = 0; i < max - min; i++)
        printf("%d, ", nb[i]);
    free(nb);
    return 0;
}
