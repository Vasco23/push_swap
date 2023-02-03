/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:29:53 by vcacador          #+#    #+#             */
/*   Updated: 2023/02/02 18:22:38 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long get_3_lower_A(int *array, int lenght, int n)
{
	static int	index;
		
	if (index + n <= lenght)
		index += n;
	return (array[index - 1]);
}

void sort_tmp(void)
{
	int i;
	int j;
	int tmp;

	i = 0;
	tmp = 0;
	while (i < utils()->ac)
	{
		j = i + 1;
		while (j < utils()->ac)
		{
			if (utils()->tmp[i] > utils()->tmp[j])
			{
				tmp = utils()->tmp[i];
				utils()->tmp[i] = utils()->tmp[j];
				utils()->tmp[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int check_if_lower_n(int n)
{
	int i;

	i = 0;
	while (i < stack_a()->length)
	{
		if (stack_a()->stack[i] <= n)
			return (0);
		i++;
	}
	return (1);
}
