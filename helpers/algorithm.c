/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:29:53 by vcacador          #+#    #+#             */
/*   Updated: 2023/01/25 17:58:27 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int 	up_or_down(int nbr, int lower);

void send_to_b(long nbr , int n_times, int lower)
{
	int tmp;

	tmp = 0;
	/* printf("%d lower\n", lower);
	printf("%ld nbr\n", nbr); */
	while(n_times >= 1)
	{
		tmp = up_or_down(nbr, lower);
		/* printf("%d n_times\n", n_times); */
		if (tmp == 1)
		{
			while (check_if_lower_n(nbr) == 0 && (stack_a()->stack[0] > nbr || stack_a()->stack[0] < lower))
				reverse_rotate_a(0);
			push_b();
		}
		if (tmp == 2)
		{
			while (check_if_lower_n(nbr) == 0 && (stack_a()->stack[0] > nbr || stack_a()->stack[0] < lower))
				rotate_a(0);
			push_b();
			
		}
		n_times--;
	}
	return ;
}

long get_3_lower_A(int *array, int lenght, int n)
{
	static int	index;
		
	if (index + n <= lenght)
		index += n;
	/* else
		return (2147483649); */
	return (array[index - 1]);
}

long get_3_lower_A_2(int *array, int lenght, int n)
{
	static int	index_2;
	
	if (index_2 + n <= lenght)
		index_2 += n;
	/* else
		return (2147483649); */
	return (array[index_2 - 1]);
}


int up_or_down(int nbr , int lower)
{
	int tmp;
	int j;
	int i;

	tmp = 0;
	i = 0;
	j = 0;
	while (stack_a()->stack[j] > nbr || stack_a()->stack[j] < lower)
		j++;
	tmp = stack_a()->length - 1;
	while (stack_a()->stack[tmp] > nbr || stack_a()->stack[tmp] < lower)
	{
		tmp--;
		i++;
	}
	if (i < j)
		return (1);
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
		while (j < utils()->ac)
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
	while (i < stack_a()->length)
	{
		if (stack_a()->stack[i] <= n)
			return (0);
		i++;
	}
	return (1);
}

