/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:00:22 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 12:12:34 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*tmp;

	if (*from == NULL)
		return ;
	tmp = *from;
	*from = (*from)->next;
	if (*from)
		(*from)->prev = NULL;
	if (*to)
		(*to)->prev = tmp;
	tmp->next = *to;
	*to = tmp;
	(*to)->prev = NULL;
}

void	rotate(t_stack **stack)
{
	t_stack	*tmp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	tmp->next = NULL;
	tmp->prev = stack_last(*stack);
	tmp->prev->next = tmp;
}

void	rrotate(t_stack **stack)
{
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	last = stack_last(*stack);
	(*stack)->prev = last;
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = (*stack);
	*stack = last;
}

void	swap(t_stack *stack)
{
	int	content_tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	content_tmp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = content_tmp;
}
