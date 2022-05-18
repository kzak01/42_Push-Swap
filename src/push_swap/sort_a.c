/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:28:28 by kzak              #+#    #+#             */
/*   Updated: 2022/05/18 09:08:00 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	call_next_sort(t_stack *stack, int count[3])
{
	return_stack(stack, count[RA_CNT], count[RB_CNT]);
	if (!check_sort_na(stack, ASC, count[RA_CNT]))
		sort_a(stack, count[RA_CNT]);
	sort_b(stack, count[RB_CNT]);
	sort_b(stack, count[PUSH_CNT] - count[RB_CNT]);
}

static void	move_stack(t_stack *stack, int pivot[2], int count[3], int *size)
{
	if (stack->a[0] > pivot[BIG])
	{
		++count[RA_CNT];
		ra(stack);
	}
	else
	{
		++count[PUSH_CNT];
		pb(stack);
		if (stack->b[0] > pivot[SMALL])
		{
			if (*size > 0 && stack->a[0] > pivot[BIG])
			{
				--(*size);
				++count[RA_CNT];
				rr(stack);
			}
			else
				rb(stack);
			++count[RB_CNT];
		}
	}
}

static void	switch_sort(t_stack *stack, int size)
{
	if (size == 3)
		return (sort_three_a(stack));
	if (size == 2 && stack->a[0] > stack->a[1])
		return (sa(stack));
}

void	sort_a(t_stack *stack, int size)
{
	int	count[3];
	int	pivot[2];

	if (size <= 3)
		return (switch_sort(stack, size));
	if (check_sort_na(stack, ASC, size))
		return ;
	ft_memset(&count, 0, sizeof(count));
	get_pivota(pivot, stack, size);
	while (size-- > 0)
		move_stack(stack, pivot, count, &size);
	call_next_sort(stack, count);
}
