/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_call.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:21:54 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 12:51:27 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rmoves_check(t_push_swap *stack, int ra, int rb)
{
	while (ra > 0 || rb > 0)
	{
		if (ra > 0 && rb > 0)
			rrr(stack);
		else if (ra > 0)
			rra(stack);
		else if (rb > 0)
			rrb(stack);
		ra--;
		rb--;
	}
}

void	recursive_call(t_push_swap *stack, t_counter *count, int index)
{
	if (index == STACK_A)
	{
		rmoves_check(stack, count->ra, count->rb);
		if (!is_sort(stack->a, STACK_A, count->ra))
			sort_stack(stack, count->ra);
		sort_reverse(stack, count->rb);
		sort_reverse(stack, count->pa - count->rb);
	}
	else if (index == STACK_B)
	{
		if (!is_sort(stack->a, STACK_A, count->pa - count->ra))
			sort_stack(stack, count->pa - count->ra);
		rmoves_check(stack, count->ra, count->rb);
		if (!is_sort(stack->a, STACK_A, count->ra))
			sort_stack(stack, count->ra);
		if (!is_sort(stack->b, STACK_B, count->rb))
			sort_reverse(stack, count->rb);
		else
			do_pa(stack, count->rb);
	}
}
