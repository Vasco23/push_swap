/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:35:28 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/12 15:55:13 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(int ver)
{
	if (!p_swap()->a || !p_swap()->a->next)
		return ;
	while (p_swap()->a->next)
		p_swap()->a = p_swap()->a->next;
	ft_lstadd_front(p_swap()->a, p_swap()->a);
	if (ver != 1)
		ft_printf("ra\n");
	return ;
}

void	reverse_rotate_b(int ver)
{
	if (!p_swap()->a || !p_swap()->a->next)
		return ;
	while (p_swap()->a->next)
		p_swap()->a = p_swap()->a->next;
	ft_lstadd_front(p_swap()->a, p_swap()->a);
	if (ver != 1)
		ft_printf("ra\n");
	return ;
}

void	reverse_rotate_a_and_b(void)
{
	reverse_rotate_a(1);
	reverse_rotate_b(1);
	ft_printf("rrr\n");
	return ;
}