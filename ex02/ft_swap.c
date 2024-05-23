/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veeraphabsutthipibul <veeraphabsutthipi    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:52:04 by veeraphabsu       #+#    #+#             */
/*   Updated: 2024/05/23 23:10:31 by veeraphabsu      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b)
{
    int n;

    n = *a;
    *a = *b;
    *b = n;
}

/*int main(int argc, char const *argv[])
{
    int i = 10, j = 20;

    printf("i = %d , j = %d\n", i, j);
    ft_swap(&i, &j);
    printf("i = %d , j = %d\n", i, j);
    return 0;
}*/
