/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:58:44 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 12:09:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap2.h"
#include "stdio.h"

static void	push_to_a(t_push_swap *data, int size)
{
	while (size--)
		operator("pa", data);
}

static void	call_next_sort(t_push_swap *data, int count[3])
{
	if (!is_sort(data->a, ASC, count[PUSH_CNT] - count[RA_CNT]))
		sort_a(data, count[PUSH_CNT] - count[RA_CNT]);
	return_stack(data, count[RA_CNT], count[RB_CNT]);
	if (!is_sort(data->a, ASC, count[RA_CNT]))
		sort_a(data, count[RA_CNT]);
	if (!is_sort(data->b, DESC, count[RB_CNT]))
		sort_b(data, count[RB_CNT]);
	else
		push_to_a(data, count[RB_CNT]);
}

static void	move_stack(t_push_swap *data, int pivot[2], int count[3])
{
	if (data->b->content < pivot[SMALL])
	{
		++count[RB_CNT];
		operator("rb", data);
	}
	else
	{
		++count[PUSH_CNT];
		operator("pa", data);
		if (data->a->content < pivot[BIG])
		{
			++count[RA_CNT];
			operator("ra", data);
		}
	}
}

static void	switch_sort(t_push_swap *data, int size)
{
	if (size == 3)
		return (sort_three_b(data));
	if (size == 2)
	{
		if (data->b->content < data->b->next->content)
			operator("sb", data);
		operator("pa", data);
		return (operator("pa", data));
	}
	if (size == 1)
		return (operator("pa", data));
}

void	sort_b(t_push_swap *data, int size)
{
	int	count[3];
	int	pivot[2];

	if (size <= 3)
		return (switch_sort(data, size));
	if (is_sort(data->b, DESC, size))
		return (push_to_a(data, size));
	ft_memset(&count, 0, sizeof(count));
	get_pivot(pivot, data->b, size);
	while (size-- > 0)
		move_stack(data, pivot, count);
	call_next_sort(data, count);
}
