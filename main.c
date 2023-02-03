/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:19:22 by vcacador          #+#    #+#             */
/*   Updated: 2023/02/02 19:13:25 by vcacador         ###   ########.fr       */
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
	/* long	i	= 0; */
	/* int		j  = 0; */
	
	utils()->ac = (ac - 1);
	/* if (utils()->ac >= 42 && utils()->ac <= 100)
		utils()->div = utils()->ac / 2;
	else if (utils()->ac > 100)
		utils()->div = utils()->ac / 6; */
	stack_a()->length = (ac - 1);
	if (errors_and_stacks(av) > 0)
		return (0);
	if (confirm() == 0)
		return (0);
	if (utils()->ac == 3)
	{
		three_numbers();
		return (0);
	}
	sort_tmp();
	if (utils()->ac > 100)
		sort_more_than_100();
	else
		sort_until_100();
	/* for (int i = 0; utils()->ac > i; i++)
	{
		ft_printf("stack A ->%d stack B ->%d\n", stack_a()->stack[i], stack_b()->stack[i]);
	} */
	while (stack_a()->length != utils()->ac)
	{
		count_moves();
	}
	put_in_place();
	/* printf("\n%d\n", utils()->div); */
	/* sort_50_or_more(); */
	/* sort_stacks(); */
	/* i = 0; */
/* 	for (int i = 0; utils()->ac > i; i++)
	{
		ft_printf("stack A ->%d stack B ->%d\n", stack_a()->stack[i], stack_b()->stack[i]);
	} */
	free(utils()->tmp);
	free(stack_a()->stack);
	free(stack_b()->stack);
	return (0);
}
