/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veeraphabsutthipibul <veeraphabsutthipi    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:22:27 by veeraphabsu       #+#    #+#             */
/*   Updated: 2024/05/23 23:41:27 by veeraphabsu      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

void ft_div__mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;

}

/*int main(int argc, char const *argv[])
{
    int x, y;
    ft_div__mod(15, 7, &x, &y);
    printf("%d:%d\n", x, y);

    return 0;
}*/
