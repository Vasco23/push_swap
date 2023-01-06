/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:24:24 by vcacador          #+#    #+#             */
/*   Updated: 2023/01/06 15:59:38 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_dup(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_a()->length)
	{
		j = i + 1;
		while (j < stack_a()->length)
		{
			if (stack_a()->stack[i] == stack_a()->stack[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
