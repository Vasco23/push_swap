/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_all_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:28:01 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/15 13:15:56 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_number(char *str);

int	is_all_numbers(char **av)
{
	int	i;

	i = 1;
	while (p_swap()->utills.ac >= i)
	{
		if (is_number(av[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

static int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			i++;
		if ((str[i] < '0' || str[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}
