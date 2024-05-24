/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veeraphabsutthipibul <veeraphabsutthipi    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 22:26:14 by veeraphabsu       #+#    #+#             */
/*   Updated: 2024/05/24 23:59:49 by veeraphabsu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int n;

    i = 0;
    j = 0;
    while (j < size)
    {
        while (i < size)
        {
            if (tab[i] > tab[j])
            {
                n = tab[j];
                tab[j] = tab[i];
                tab[i] = n;
            }
            i++;
        }
        i = 0;
        j++;
    }
}

/*int main(int argc, char const *argv[])
{
    int num[20];
    int size_num = sizeof(num) / sizeof(num[0]);

    printf("\n\nbefore ascending\n\n");
    for (int i = 0; i < size_num ; i++)
    {
        num[i] = rand() % 101;
        printf("%d ", num[i]);
    }

    ft_sort_int_tab(num, size_num);

    printf("\n\nAfter ascending\n\n");
    for (int i = 0; i < size_num ; i++)
    {
        printf("%d ", num[i]);
    }
}*/