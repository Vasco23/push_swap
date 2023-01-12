/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:19:22 by vcacador          #+#    #+#             */
/*   Updated: 2023/01/11 12:30:31 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_utils *utils(void)
{
	static t_utils utils;
	return (&utils);
}

t_stack *stack_a(void)
{
	static t_stack stack_a;
	return (&stack_a);
}

t_stack *stack_b(void)
{
	static t_stack stack_b;
	return (&stack_b);
}

int	main(int ac, char **av)
{
	long	i	= 0;
	/* int		j  = 0; */
	
	utils()->ac = (ac - 1);
	if (utils()->ac >= 42 && utils()->ac <= 100)
		utils()->div = utils()->ac / 2;
	else if (utils()->ac > 100)
		utils()->div = utils()->ac / 6;
	stack_a()->length = (ac - 1);
	if (errors_and_stacks(av) > 0)
		return (0);
	if (utils()->ac == 3)
	{
		three_numbers();
		return (0);
	}
	sort_tmp();
	/* printf("\n%d\n", utils()->div); */
	while (stack_a()->length > 0)
	{
		if (utils()->div > 0)
		{
			while (i < utils()->div)
			{
				/* while (utils()->ac > j)
				{
					ft_printf("\nstack A ->%d stack B ->%d\n", stack_a()->stack[j], stack_b()->stack[j]);
					j++;
				} */
				if (stack_a()->length > 3 && i + 3 <= utils()->div)
				{
					i = get_3_lower_A(utils()->tmp, utils()->ac, 3);
					send_to_b(i, 3);
					i += 3;
				}
				else if	(i + 3 == utils()->div)
				{
					three_numbers();
					break;
				}
				else if (i + 2 == utils()->div && stack_a()->stack[0] > stack_a()->stack[1])
				{
					swap_a(0);
				}
				else
					break;
				/* j = 0; */
			}
			sort_stacks();
		}
		else
		{
			if (stack_a()->length > 3)
				{
					i = get_3_lower_A(utils()->tmp, utils()->ac, 3);
					send_to_b(i, 3);
					i += 3;
				}
				else if	(stack_a()->length == 3)
				{
					three_numbers();
					/* break; */
				}
				else if (stack_a()->length == 2 && stack_a()->stack[0] > stack_a()->stack[1])
				{
					swap_a(0);
				}
				else
					sort_stacks();
		}
		i = 0;
	}
	i = 0;
	/* while (utils()->ac > i)
	{
		ft_printf("\nstack A ->%d stack B ->%d\n", stack_a()->stack[i], stack_b()->stack[i]);
		i++;
	} */
	return (0);
}
