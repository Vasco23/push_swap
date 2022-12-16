/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_av.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:25:12 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/16 14:38:36 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	copy_av(char **av)
{
	int i;

	i = 0;
	stack_a()->stack = malloc(sizeof(int *) * (stack_a()->length));
	stack_b()->stack = malloc(sizeof(int *) * (stack_a()->length));
	if (!stack_a()->stack || !stack_b()->stack)
		return (1);
	while (stack_a()->length > i + 1)
	{
		if (ft_atol(av[i + 1]) >= -2147483648
			&& ft_atol(av[i + 1]) <= 2147483647)
			stack_a()->stack[i] = ft_atol(av[i + 1]);
		else
			return (2);
		i++;
	}
	return (0);
}
