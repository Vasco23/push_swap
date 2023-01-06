/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:29:53 by vcacador          #+#    #+#             */
/*   Updated: 2023/01/06 15:58:03 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int 	up_or_down(int nbr);
int 	check_if_lower_n(int n);

void send_to_b(long nbr , int n_times)
{
	int tmp;
	int i;
	
	i = 0;
	tmp = 0;
	while(n_times >= 1)
	{
		tmp = up_or_down(nbr);
		while (stack_a()->stack[0] > nbr && tmp == 1 && check_if_lower_n(nbr) == 0)
		{
			reverse_rotate_a(0);
			i++;
		}
		if (stack_a()->stack[0] <= nbr)
			push_b();
		i = 0;
		while (stack_a()->stack[0] > nbr && tmp == 2 && check_if_lower_n(nbr) == 0)
		{
			rotate_a(0);
			i++;
		}
		if (stack_a()->stack[0] <= nbr)
			push_b();
		n_times--;
	}
	return ;
}

long get_3_lower_A(int *array, int lenght, int n)
{
	static int	index;
		
	if (index + n <= lenght)
		index += n;
	else
		return (2147483649);
/* 	printf("index-> %d\n", index - 1); */
	return (array[index - 1]);
}

int up_or_down(int nbr)
{
	int tmp;
	int j;
	int i;

	tmp = 0;
	i = 0;
	while (i < utils()->ac)
	{
		if (stack_a()->stack[i] <= nbr)
			break;
		i++;
	}
	j = i;
	tmp = utils()->ac - 1;
	i = 1;
	while (tmp >= 0)
	{
		if (stack_a()->stack[i] <= nbr)
			break;
		tmp--;
		i++;
	}
	if (i < j)
		return (1);
	else
		return (2);
}

void sort_tmp(void)
{
	int i;
	int j;
	int tmp;

	i = 0;
	tmp = 0;
	while (i < utils()->ac)
	{
		j = i + 1;
		while(j < utils()->ac)
		{
			if (utils()->tmp[i] > utils()->tmp[j])
			{
				tmp = utils()->tmp[i];
				utils()->tmp[i] = utils()->tmp[j];
				utils()->tmp[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int check_if_lower_n(int n)
{
	int i;

	i = 0;
	while(i < stack_a()->length)
	{
		if (stack_a()->stack[i] <= n)
			return(0);
		i++;
	}
	return (1);
}

