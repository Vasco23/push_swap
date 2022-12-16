/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:26:21 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/05 16:58:51 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atol(const char *nptr)
{
	int		i;
	int		sinal;
	long	result;

	i = 0;
	sinal = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sinal = -sinal;
		i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (result * sinal >= -2147483648 || result * sinal <= 2147483647)
			result = (result * 10) + (nptr[i++] - '0');
		else
			return (-21474836508);
	}
	return (result * sinal);
}