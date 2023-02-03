/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confirm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:24:48 by vcacador          #+#    #+#             */
/*   Updated: 2023/02/02 12:23:51 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	confirm(void)
{
	int	i;

	i = 0;
	while (i + 1 < stack_a()->length)
	{
		if (stack_a()->stack[i] > stack_a()->stack[i + 1])
			return (1);
		i++;
	}
	return (0);
}
