/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_numbers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:20:30 by vcacador          #+#    #+#             */
/*   Updated: 2023/01/26 01:04:13 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	save_lines(void);
static void	save_lines2(void);
static void	save_lines3(void);

void	three_numbers(void)
{
	if (confirm() != 1)
		return ;
	if (utils()->ac == 2 && stack_a()->stack[0] > stack_a()->stack[1])
		swap_a(0);
	else if (utils()->ac == 2 && stack_a()->stack[0] < stack_a()->stack[1])
		return ;
	else if (stack_a()->stack[0] < stack_a()->stack[1])
	{
		if (stack_a()->stack[1] < stack_a()->stack[2])
			save_lines();
		else if (stack_a()->stack[0] < stack_a()->stack[2])
			save_lines2();
		else
			reverse_rotate_a(0);
	}
	else if (stack_a()->stack[0] > stack_a()->stack[1]
		&& stack_a()->stack[0] > stack_a()->stack[2])
	{
		if (stack_a()->stack[1] < stack_a()->stack[2])
			rotate_a(0);
		else
			save_lines3();
	}
	else
		swap_a(0);
}

static void	save_lines(void)
{
	swap_a(0);
	rotate_a(0);
}

static void	save_lines2(void)
{
	reverse_rotate_a(0);
	swap_a(0);
}

static void	save_lines3(void)
{
	rotate_a(0);
	swap_a(0);
}
