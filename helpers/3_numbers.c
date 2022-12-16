/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_numbers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:20:30 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/12 15:56:09 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* static void	save_lines(void);
static void	save_lines2(void);
static void	save_lines3(void);

void	three_numbers(void)
{
	if (confirm() == 0)
		return ;
	else if (stacks()->ac == 3)
		swap_a(0);
	else if (stacks()->stack_a[0] < stacks()->stack_a[1])
	{
		if (stacks()->stack_a[1] < stacks()->stack_a[2])
			save_lines();
		else if (stacks()->stack_a[0] < stacks()->stack_a[2])
			save_lines2();
		else
			reverse_rotate_a(0);
	}
	else if (stacks()->stack_a[0] > stacks()->stack_a[1]
		&& stacks()->stack_a[0] > stacks()->stack_a[2])
	{
		if (stacks()->stack_a[1] < stacks()->stack_a[2])
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
 */