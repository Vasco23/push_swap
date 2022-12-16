/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confirm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:24:48 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/12 15:45:28 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	confirm(void)
{
	int	i;

	i = 0;
	p_swap()->utills.ac -= 1;
	while (p_swap()->utills.temp[i + 1])
	{
		if (p_swap()->utills.temp[i] >= p_swap()->utills.temp[i + 1])
			return (1);
		i++;
	}
	i++;
	if (i < p_swap()->utills.ac)
		return (1);
	return (0);
}
