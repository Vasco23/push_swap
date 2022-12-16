/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_and_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:25:58 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/06 11:50:55 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	errors_and_stacks(char **av)
{
	if (is_all_numbers(av) == 1)
		return (ft_printf("Error\n"));
	if (copy_av(av) >= 1)
		return (ft_printf("Error\n"));
	if (check_dup() == 1)
		return (ft_printf("Error\n"));
	return (0);
}
