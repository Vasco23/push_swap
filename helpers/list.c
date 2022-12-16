/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:37:54 by vcacador          #+#    #+#             */
/*   Updated: 2022/12/15 16:32:10 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstnew(int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->num = num;
	new->next = NULL;
	return (new);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
			lst = lst->next;
	return (lst);
}

void	ft_lstadd_front(t_stack *lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	if (lst != NULL)
		new->next = lst;
	lst = new;
}

void	ft_lstadd_back(t_stack *lst, t_stack *new)
{
	t_stack	*ola;

	if (!lst || !new)
		return ;
	if (!lst)
	{
		lst = new;
		return ;
	}
	ola = ft_lstlast(lst);
	ola->next = new;
}


