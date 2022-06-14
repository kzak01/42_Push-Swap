/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:26:25 by kzak              #+#    #+#             */
/*   Updated: 2022/06/14 14:15:09 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_push_swap *stack)
{
	t_stack	*temp;

	ft_printf("rra\n");
	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	temp = ft_lstlast2(stack->a);
	stack->a->prev = temp;
	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = stack->a;
	stack->a = temp;
	// ft_printf("rra\n");
}

void	rrb(t_push_swap *stack)
{
	t_stack	*temp;

	ft_printf("rrb\n");
	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	temp = ft_lstlast2(stack->b);
	stack->b->prev = temp;
	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = stack->b;
	stack->b = temp;
	// ft_printf("rrb\n");
}

void	rrr(t_push_swap *stack)
{
	t_stack	*temp;

	ft_printf("rrr\n");
	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	temp = ft_lstlast2(stack->a);
	stack->a->prev = temp;
	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = stack->a;
	stack->a = temp;
	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	temp = ft_lstlast2(stack->b);
	stack->b->prev = temp;
	temp->prev->next = NULL;
	temp->prev = NULL;
	temp->next = stack->b;
	stack->b = temp;
	// ft_printf("rrr\n");
}
