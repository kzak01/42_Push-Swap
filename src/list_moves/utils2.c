/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:42:44 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 10:28:16 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rmoves_check(t_push_swap *stack, int ra, int rb)
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

void	sort_small(t_push_swap *stack, int n, int index)
{
	if (index == STACK_A)
	{
		if (n == 3)
			return (sort(stack->a));
		else if (n == 2 && stack->a->content > stack->a->next->content)
			return (sa(stack));
	}
	else if (index == STACK_B)
	{
		if (n == 3)
			return (sort(stack->b));
		if (n == 2)
		{
			if (stack->b->content < stack->b->next->content)
				sb(stack);
			pa(stack);
			return (pa(stack));
		}
		if (n == 1)
			return (pa(stack));
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
