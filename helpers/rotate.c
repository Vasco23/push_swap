/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:34:56 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/20 17:00:39 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(int ver)
{
	int i;
	int tmp;
	int tmp_2;

	i = 0;
	if (stack_a()->length < 2)
		return ;
	tmp_2 = stack_a()->stack[i];
	while (stack_a()->length > i + 1)
	{
		tmp = stack_a()->stack[i + 1];
		stack_a()->stack[i] = tmp;
		i++;
	}
	stack_a()->stack[i] = tmp_2;
	if (ver != 1)
		ft_printf("ra\n");
	return ;
}

void	rotate_b(int ver)
{
	int i;
	int tmp;
	int tmp_2;

	i = 0;
	if (stack_b()->length < 2)
		return ;
	tmp_2 = stack_b()->stack[0];
	while (stack_b()->length > i + 1)
	{
		tmp = stack_b()->stack[i + 1];
		stack_b()->stack[i] = tmp;
		i++;
	}
	stack_b()->stack[i] = tmp_2;
	if (ver != 1)
		ft_printf("rb\n");
	return ;
}

void	rotate_a_and_b(void)
{
	rotate_a(1);
	rotate_b(1);
	ft_printf("rr\n");
	return ;
}
