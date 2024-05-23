/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veeraphabsutthipibul <veeraphabsutthipi    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:29:40 by veeraphabsu       #+#    #+#             */
/*   Updated: 2024/05/24 00:39:47 by veeraphabsu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int n;
    n = *a;
    *a = *a / *b;
    *b = n % *b;
}
/*int main(int argc, char const *argv[])
{
    int x = 20, y = 3;
    ft_ultimate_div_mod(&x,&y);
    printf("%d : %d\n",x,y);
    return 0;
}*/
