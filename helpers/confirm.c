/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confirm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:24:48 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/29 12:26:37 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	confirm(void)
{
	int	i;

	i = 0;
	while (stack_a()->stack[i + 1])
	{
		if (stack_a()->stack[i] >= stack_a()->stack[i + 1])
			return (1);
		i++;
	}
	i++;
	if (i < utils()->ac)
		return (1);
	return (0);
}
