/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:35:28 by vcacador          #+#    #+#             */
/*   Updated: 2023/01/06 16:00:35 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(int ver)
{
	int i;
	int tmp;
	int tmp_2;

	i = stack_a()->length - 1;
	if (stack_a()->length < 2)
		return ;
	tmp_2 = stack_a()->stack[stack_a()->length - 1];
	while (i > 0)
	{
		tmp = stack_a()->stack[i - 1];
		stack_a()->stack[i] = tmp;
		i--;
	}
	stack_a()->stack[i] = tmp_2;
	if (ver != 1)
		ft_printf("rra\n");
	return ;
}

void	reverse_rotate_b(int ver)
{
	int i;
	int tmp;
	int tmp_2;

	i = stack_b()->length - 1;
	if (stack_b()->length < 2)
		return ;
	tmp_2 = stack_b()->stack[stack_b()->length - 1];
	while (i > 0)
	{
		tmp = stack_b()->stack[i - 1];
		stack_b()->stack[i] = tmp;
		i--;
	}
	stack_b()->stack[i] = tmp_2;
	if (ver != 1)
		ft_printf("rrb\n");
	return ;
}

void	reverse_rotate_a_and_b(void)
{
	reverse_rotate_a(1);
	reverse_rotate_b(1);
	ft_printf("rrr\n");
	return ;
}