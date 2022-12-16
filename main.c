/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:19:22 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/16 14:34:37 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_a(void)
{
	static t_stack stacks_a;
	return (&stack_a);
}

t_stack *stack_b(void)
{
	static t_stack stacks_b;
	return (&stack_a);
}

int	main(int ac, char **av)
{
	int	i	= 0;
	
	utills()->ac = ac - 1;
	if (errors_and_stacks(av) > 0)
		return (0);
	/* three_numbers(ac); */
	/* algorithm(); */
	while (utills()->ac >= i)
	{
		ft_printf("stack A ->%d\n", stack_a()->num);
		i++;
	}
	return (0);
}
