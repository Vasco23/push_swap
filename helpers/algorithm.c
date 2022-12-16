/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:29:53 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/09 10:46:55 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* void algorithm(void)
{
	
} */

int	median(void)
{
	int	median;

	median = 0;
	get_tmp_org();
	if (p_swap()->utills.ac % 2 == 0)
		median = (p_swap()->utills.temp[p_swap()->utills.ac / 2] \
		+ p_swap()->utills.temp[(p_swap()->utills.ac / 2) + 1] / 2);
	else
		median = p_swap()->utills.temp[p_swap()->utills.ac / 2];
	return (median);
}

void	get_tmp_org(void)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < p_swap()->utills.ac)
	{
		j = i + 1;
		while (j < p_swap()->utills.ac)
		{
			if (p_swap()->utills.temp[i] > p_swap()->utills.temp[j])
			{
				tmp = p_swap()->utills.temp[i];
				p_swap()->utills.temp[i] = p_swap()->utills.temp[j];
				p_swap()->utills.temp[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
