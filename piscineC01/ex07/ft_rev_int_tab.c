/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veeraphabsutthipibul <veeraphabsutthipi    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:40:23 by veeraphabsu       #+#    #+#             */
/*   Updated: 2024/05/24 22:24:05 by veeraphabsu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int n;
	i = 0;
	size = size - 1;
	while (i < size)
	{
		n = tab[i];
		tab[i] = tab[size];
		tab[size] = n;
		i++;
		size--;
	}
}

/*int main(int argc, char const *argv[])
{
	int num[10];

	printf("\n\nbefore revert\n\n");
	for (int i = 0; i < 10; i++)
	{
		num[i] = rand()%101 ;
		printf("%d ", num[i]);
	}

	int size_num = sizeof(num) / sizeof(num[0]);

	ft_rev_int_tab(num, size_num);
	
	printf("\n\nAfter revert\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}

	return 0;
}*/
