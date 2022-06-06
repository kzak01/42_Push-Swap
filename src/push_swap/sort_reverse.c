/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:46:20 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 10:21:28 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	moves(int *pivot, t_push_swap *stack, int *temp)
{
	if (stack->b->content < pivot[0])
	{
		++temp[2];
		rb(stack);
	}
	else
	{
		++temp[1];
		pa(stack);
		if (stack->a->content < pivot[1])
		{
			++temp[0];
			ra(stack);
		}
	}
}

void	do_pa(t_push_swap *stack, int n)
{
	while (n--)
		pa(stack);
}

void	sort_reverse(t_push_swap *stack, int n)
{
	int	pivot[2];
	int	temp[3];

	if (n <= 3)
		return (sort_small(stack, n, STACK_B));
	if (is_sort(stack->b, STACK_B, n))
		return (do_pa(stack, n));
	find_pivot(pivot, stack->b, n);
	while (n-- > 0)
		moves(pivot, stack, temp);
	recursive_call(stack, temp, STACK_B);
}
