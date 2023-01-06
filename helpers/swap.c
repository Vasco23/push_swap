/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:33:27 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/21 11:23:12 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(int ver)
{
	int tmp;

	if (stack_a()->length < 1)
		return ;
	tmp = stack_a()->stack[0];
	stack_a()->stack[0] = stack_a()->stack[1];
	stack_a()->stack[1] = tmp;
	if (ver != 1)
		ft_printf("sa\n");
	return ;
}

void	swap_b(int ver)
{
	int tmp;

	if (stack_b()->length < 1)
		return ;
	tmp = stack_b()->stack[0];
	stack_b()->stack[0] = stack_b()->stack[1];
	stack_b()->stack[1] = tmp;
	if (ver != 1)
		ft_printf("sb\n");
	return ;
}

void	swap_a_and_b(void)
{
	swap_a(1);
	swap_b(1);
	ft_printf("ss\n");
	return ;
}
