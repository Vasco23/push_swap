/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:28:23 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/16 14:40:08 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_a_new_nbr(int *stack, int len, int nbr)
{
	int	tmp_1;
	int	tmp_2;
	int	i;

	i = 0;
	while (i >= 0)
	{
		tmp_1 = stack[i];
		if (i == 0)
			stack[i] = len;
		else
		{
			tmp_2 = stack[i + 1];
			stack[i] = tmp_1;
			tmp_1 = tmp_2;
		}
		i++;
	}
	stack[i] = tmp_1;
	return ;
}

void	clean_frist_nbr(int *stack, int len)
{
	int	i;

	i = 0;
	while (len >= 0)
		stack[i] = stack[i + 1];
	return ;
}

void	push_a(void)
{
	if (!stack_b()->length < 1)
		return ;
	stack_b()->length += 1;
	stack_b()->length -= 1;
	put_a_new_nbr(stacks()->stack_a->stack, stacks()->stack_a->length,
		stacks()->stack_b->stack[0]);
	clean_frist_nbr(stacks()->stack_b->stack, stacks()->stack_b->length);
	ft_printf("pa\n");
	return ;
}

void	push_b(void)
{
	if (!stacks()->stack_a->length < 1)
		return ;
	stacks()->stack_b->length += 1;
	stacks()->stack_a->length -= 1;
	put_a_new_nbr(stacks()->stack_b->stack, stacks()->stack_b->length,
		stacks()->stack_a->stack[0]);
	clean_frist_nbr(stacks()->stack_a->stack, stacks()->stack_a->length);
	ft_printf("pa\n");
	return ;
}
