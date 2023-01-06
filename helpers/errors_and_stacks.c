/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_and_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:25:58 by vcacador          #+#    #+#             */
/*   Updated: 2023/01/04 17:42:37 by vcacador         ###   ########.fr       */
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
	if (no_input() == 1)
		return (1);
	return (0);
}
