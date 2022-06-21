/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_4case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:55:58 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 10:33:43 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	threecase(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[2] < stack->a[0])
		ra(stack);
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[2] < stack->a[0])
		rra(stack);
	if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[2] < stack->a[0])
	{
		sa(stack);
		rra(stack);
	}
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[2] > stack->a[0])
	{
		sa(stack);
		ra(stack);
	}
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[2] > stack->a[0])
		sa(stack);
}

void	fourcase(t_stack *stack)
{
	int	max;

	max = find_max(stack);
	sort_max(stack, max);
	threecase(stack);
	pa(stack);
	ra(stack);
}
