/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:51:29 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 12:14:36 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_new(int content)
{
	t_stack	*lst;

	lst = malloc(sizeof(t_stack));
	if (lst == NULL)
		return (0);
	lst->next = 0;
	lst->prev = 0;
	lst->content = content;
	return (lst);
}

void	stack_clear(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	*lst = 0;
}

void	return_stack(t_push_swap *data, int ra_cnt, int rb_cnt)
{
	while (ra_cnt > 0 || rb_cnt > 0)
	{
		if (ra_cnt > 0 && rb_cnt > 0)
			operator("rrr", data);
		else if (ra_cnt > 0)
			operator("rra", data);
		else if (rb_cnt > 0)
			operator("rrb", data);
		--ra_cnt;
		--rb_cnt;
	}
}

t_stack	*stack_last(t_stack *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}
