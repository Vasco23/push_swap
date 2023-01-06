/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:28:23 by vcacador          #+#    #+#             */
/*   Updated: 2023/01/05 19:00:53 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_a_new_nbr(int *stack, int len, int nbr)
{
	int	tmp;

	while (len > 0)
	{
		tmp = stack[len - 1];
		stack[len] = tmp;
		len--;
	}
	stack[len] = nbr;
	return ;
}

void	clean_frist_nbr(int *stack, int len)
{
	int	i;

	i = 0;
	while (len >= 0)
	{
		stack[i] = stack[i + 1];
		i++;
		len--;
	}
	stack[i] = 0;
	return ;
}

void	push_a(void)
{
	if (stack_b()->length < 1)
		return ;
	stack_a()->length += 1;
	stack_b()->length -= 1;
	put_a_new_nbr(stack_a()->stack, stack_a()->length,
		stack_b()->stack[0]);
	clean_frist_nbr(stack_b()->stack, stack_b()->length);
	ft_printf("pa\n");
	return ;
}

void	push_b(void)
{
	if (stack_a()->length < 1)
		return ;
	stack_b()->length += 1;
	stack_a()->length -= 1;
	put_a_new_nbr(stack_b()->stack, stack_b()->length,
		stack_a()->stack[0]);
	clean_frist_nbr(stack_a()->stack, stack_a()->length);
	ft_printf("pb\n");
	return ;
}
