/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:20:45 by kzak              #+#    #+#             */
/*   Updated: 2022/06/01 16:27:38 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast2(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

void	sort(t_push_swap *stack)
{
	if (stack->a->content > stack->a->next->content && stack->a->next->content < stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
		ra(stack);
	if (stack->a->content < stack->a->next->content && stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
		rra(stack);
	if (stack->a->content > stack->a->next->content && stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
	{
		sa(stack);
		rra(stack);
	}
	if (stack->a->content < stack->a->next->content && stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content > stack->a->content)
	{
		sa(stack);
		ra(stack);
	}
	if (stack->a->content > stack->a->next->content && stack->a->next->content < stack->a->next->next->content
		&& stack->a->next->next->content > stack->a->content)
		sa(stack);
}

void	ft_lstadd_back2(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		temp = ft_lstlast2(*lst);
		temp->next = new;
		new->prev = temp;
	}
}
