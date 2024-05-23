/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veeraphabsutthipibul <veeraphabsutthipi    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:43:16 by veeraphabsu       #+#    #+#             */
/*   Updated: 2024/05/24 00:04:42 by veeraphabsu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    while (*str != 0)
    {
        write(1, str, 1);
        str++;
    }
}

/*int main(int argc, char const *argv[])
{
    char *string;
    string = "Hello world";

    ft_putstr(string);
    return 0;
}*/
