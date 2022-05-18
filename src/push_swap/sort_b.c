/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:58:44 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 09:08:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_to_a(t_stack *stack, int n)
{
	while (n--)
		pa(stack);
}

static void	call_next_sort(t_stack *stack, int count[3])
{
	if (!check_sort_na(stack, ASC, count[PUSH_CNT] - count[RA_CNT]))
		sort_a(stack, count[PUSH_CNT] - count[RA_CNT]);
	return_stack(stack, count[RA_CNT], count [RB_CNT]);
	if (!check_sort_na(stack, ASC, count[RA_CNT]))
		sort_a(stack, count[RA_CNT]);
	if (!check_sort_nb(stack, DESC, count[RB_CNT]))
		sort_b(stack, count[RB_CNT]);
	else
		push_to_a(stack, count[RB_CNT]);
}

static void	move_stack(t_stack *stack,  int pivot[2], int count[3])
{
	if (stack->b[0] < pivot[SMALL])
	{
		++count[RB_CNT];
		rb(stack);
	}
	else
	{
		++count[PUSH_CNT];
		pa(stack);
		if (stack->a[0] < pivot[BIG])
		{
			++count[RA_CNT];
			ra(stack);
		}
	}
}

static void	switch_sort(t_stack *stack, int size)
{
	if (size == 3)
		return (sort_three_b(stack));
	if (size == 2)
	{
		if (stack->b[0] < stack->b[1])
			sb(stack);
		pa(stack);
		return(pa(stack));
	}
	if (size == 1)
		return (pa(stack));
}

void	sort_b(t_stack *stack, int size)
{
	int	count[3];
	int	pivot[2];

	if (size <= 3)
		return (switch_sort(stack, size));
	if (check_sort_nb(stack, DESC, size))
		return (push_to_a(stack, size));
	ft_memset(&count, 0, sizeof(count));
	get_pivotb(pivot, stack, size);
	while (size-- > 0)
		move_stack(stack, pivot, count);
	call_next_sort(stack, count);
}