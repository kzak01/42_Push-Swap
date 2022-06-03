/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:11:31 by kzak              #+#    #+#             */
/*   Updated: 2022/06/01 16:16:51 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_push_swap *stack)
{
	t_stack	*temp;

	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	temp = stack->a;
	stack->a = stack->a->next;
	stack->a->prev = NULL;
	temp->next = NULL;
	temp->prev = ft_lstlast2(stack->a);
	temp->prev->next = temp;
	ft_printf("ra\n");
}

void	rb(t_push_swap *stack)
{
	t_stack	*temp;

	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	temp = stack->b;
	stack->b = stack->b->next;
	stack->b->prev = NULL;
	temp->next = NULL;
	temp->prev = ft_lstlast2(stack->b);
	temp->prev->next = temp;
	ft_printf("rb\n");
}

void	rr(t_push_swap *stack)
{
	t_stack	*temp;

	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	temp = stack->a;
	stack->a = stack->a->next;
	stack->a->prev = NULL;
	temp->next = NULL;
	temp->prev = ft_lstlast2(stack->a);
	temp->prev->next = temp;
	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	temp = stack->b;
	stack->b = stack->b->next;
	stack->b->prev = NULL;
	temp->next = NULL;
	temp->prev = ft_lstlast2(stack->b);
	temp->prev->next = temp;
	ft_printf("rr\n");
}