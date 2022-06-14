/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varius_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:24:18 by kzak              #+#    #+#             */
/*   Updated: 2022/06/14 14:30:41 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2(t_push_swap *stack)
{
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content > stack->a->content)
	{
		sa(stack);
		ra(stack);
	}
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content < stack->a->next->next->content
		&& stack->a->next->next->content > stack->a->content)
		sa(stack);
}

void	sort(t_push_swap *stack)
{
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content < stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
		ra(stack);
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
		rra(stack);
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content > stack->a->next->next->content
		&& stack->a->next->next->content < stack->a->content)
	{
		sa(stack);
		rra(stack);
	}
	sort_2(stack);
}

void	varius_sort(t_push_swap *stack)
{
	if (stack->la == 2 && stack->a->content > stack->a->next->content)
		return (sa(stack));
	if (stack->la == 3)
		return (sort(stack));
	if (stack->la == 4)
		return (fourcase(stack, stack->la));
	if (stack->la == 5)
		return (fivecase(stack, stack->la));
	return (sort_stack(stack, stack->la));
}
