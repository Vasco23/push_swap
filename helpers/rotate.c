/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:34:56 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/09 15:58:46 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(int ver)
{
	if (!p_swap()->a || !p_swap()->a->next)
		return ;
	p_swap()->tmp = p_swap()->a;
	while (p_swap()->a->next)
		p_swap()->a = p_swap()->a->next;
	p_swap()->a->next = p_swap()->tmp;
	if (ver != 1)
		ft_printf("ra\n");
	return ;
}

void	rotate_b(int ver)
{
	if (!p_swap()->b || !p_swap()->b->next)
		return ;
	p_swap()->tmp = p_swap()->b;
	while (p_swap()->b->next)
		p_swap()->b = p_swap()->b->next;
	p_swap()->b->next = p_swap()->tmp;
	if (ver != 1)
		ft_printf("ra\n");
	return ;
}

void	rotate_a_and_b(void)
{
	rotate_a(1);
	rotate_b(1);
	ft_printf("rr\n");
	return ;
}
