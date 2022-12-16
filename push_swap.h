/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:30:24 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/16 14:35:50 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_stack
{
	int	*stack;
	int	length;
}		t_stack;

t_stack 	*stack_a(void);
t_stack		*stack_b(void);
int			copy_av(char **av);
long		ft_atol(const char *nptr);
int			is_all_numbers(char **av);
int			check_dup(void);
int			ft_strcmp(const char *s1, const char *s2);
int			errors_and_stacks(char **av);
void		swap_a(int ver);
void		swap_b(int ver);
void		swap_a_and_b(void);
void		push_a(void);
void		push_b(void);
void		rotate_a(int ver);
void		rotate_b(int ver);
void		rotate_a_and_b(void);
void		reverse_rotate_a(int ver);
void		reverse_rotate_b(int ver);
void		reverse_rotate_a_and_b(void);
void		three_numbers(void);
int			confirm(void);
void		get_tmp_org(void);
int			median(void);
void		algorithm(void);

/* t_stack		*ft_lstnew(int num);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_lstadd_front(t_stack *lst, t_stack *new);
void		ft_lstadd_back(t_stack *lst, t_stack *new); */

#endif