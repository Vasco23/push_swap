/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:33:27 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/15 16:33:30 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(int ver)
{
	if (!p_swap()->a || !p_swap()->a->next)
		return ;
	tmp = p_swap()->a;
	p_swap()->a = p_swap()->a->next;
	p_swap()->a->next = tmp;
	if (ver != 1)
		ft_printf("ra\n");
	return ;
}

void	swap_b(int ver)
{
	t_stack	*tmp;
	if (!p_swap()->b || !p_swap()->b->next)
		return ;
	tmp = p_swap()->b;
	p_swap()->b = p_swap()->b->next;
	p_swap()->b->next = tmp;
	if (ver != 1)
		ft_printf("ra\n");
	return ;
}

void	swap_a_and_b(void)
{
	swap_a(1);
	swap_b(1);
	ft_printf("ss\n");
	return ;
}
