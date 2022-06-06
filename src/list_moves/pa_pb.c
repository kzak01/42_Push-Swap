/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:34:15 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 14:15:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_push_swap *stack)
{
	t_stack	*temp;

	// ft_printf("pa\n");
	if (stack->b == NULL)
		return ;
	temp = stack->b;
	stack->b = stack->b->next;
	if (stack->b)
		stack->b->prev = NULL;
	if (stack->a)
		stack->a->prev = temp;
	temp->next = stack->a;
	stack->a = temp;
	stack->a->prev = NULL;
	ft_printf("pa\n");
}

void	pb(t_push_swap *stack)
{
	t_stack	*temp;

	// ft_printf("pb\n");
	if (stack->a == NULL)
		return ;
	temp = stack->a;
	stack->a = stack->a->next;
	if (stack->a)
		stack->a->prev = NULL;
	if (stack->b)
		stack->b->prev = temp;
	temp->next = stack->b;
	stack->b = temp;
	stack->b->prev = NULL;
	ft_printf("pb\n");
}
