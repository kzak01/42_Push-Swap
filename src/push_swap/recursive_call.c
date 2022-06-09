/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_call.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:21:54 by kzak              #+#    #+#             */
/*   Updated: 2022/06/08 13:56:10 by kzak             ###   ########.fr       */
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

void	recursive_call(t_push_swap *stack, int *temp, int index)
{
	if (index == STACK_A)
	{
		rmoves_check(stack, temp[0], temp[2]);
		if (!is_sort(stack->a, STACK_A, temp[0]))
			sort_stack(stack, temp[0]);
		sort_reverse(stack, temp[2]);
		sort_reverse(stack, temp[1] - temp[2]);
	}
	else if (index == STACK_B)
	{
		if (!is_sort(stack->a, STACK_A, temp[1] - temp[0]))
			sort_stack(stack, temp[1] - temp[0]);
		rmoves_check(stack, temp[0], temp[2]);
		if (!is_sort(stack->a, STACK_A, temp[0]))
			sort_stack(stack, temp[0]);
		if (!is_sort(stack->b, STACK_B, temp[2]))
			sort_reverse(stack, temp[2]);
		else
			do_pa(stack, temp[2]);
	}
}
