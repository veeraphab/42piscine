/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veeraphabsutthipibul <veeraphabsutthipi    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:40:39 by veeraphabsu       #+#    #+#             */
/*   Updated: 2024/05/24 00:46:52 by veeraphabsu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;

    while (*str != 0)
    {
        str++;
        len++;
    }

    return len;
}

/*int main(int argc, char const *argv[])
{
    char *string;
    string = "Hello world";
    printf("%d", ft_strlen(string));
    return 0;
}*/