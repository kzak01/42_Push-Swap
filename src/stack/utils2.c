/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:20:29 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 14:22:39 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_add_back(t_stack2 **lst, t_stack2 *new_list)
{
	t_stack2	*last;

	if (*lst == NULL)
	{
		*lst = new_list;
		return ;
	}
	last = stack_last(*lst);
	last->next = new_list;
	new_list->prev = last;
}

void	stack_add_front(t_stack2 **lst, t_stack2 *new_list)
{
	if (*lst == NULL)
	{
		*lst = new_list;
		return ;
	}
	new_list->next = *lst;
	(*lst)->prev = new_list;
	*lst = new_list;
}

int	check_stack_sorted(t_stack2 *stack_a, t_stack2 *stack_b)
{
	int	n;

	if (stack_b != NULL || stack_a == NULL)
		return (0);
	n = stack_a->content;
	while (stack_a)
	{
		if (n > stack_a->content)
			return (0);
		n = stack_a->content;
		stack_a = stack_a->next;
	}
	return (1);
}

int	stack_size(t_stack2 *lst)
{
	int		cnt;

	cnt = 0;
	while (lst)
	{
		lst = lst->next;
		++cnt;
	}
	return (cnt);
}
