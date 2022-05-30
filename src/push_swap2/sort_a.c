/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:28:28 by kzak              #+#    #+#             */
/*   Updated: 2022/05/25 12:10:06 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap2.h"
#include "stdio.h"

static void	call_next_sort(t_push_swap *data, int count[3])
{
	return_stack(data, count[RA_CNT], count[RB_CNT]);
	if (!is_sort(data->a, ASC, count[RA_CNT]))
		sort_a(data, count[RA_CNT]);
	sort_b(data, count[RB_CNT]);
	sort_b(data, count[PUSH_CNT] - count[RB_CNT]);
}

static void	move_stack(t_push_swap *data, int pivot[2], int count[3], int *size)
{
	if (data->a->content > pivot[BIG])
	{
		++count[RA_CNT];
		operator("ra", data);
	}
	else
	{
		++count[PUSH_CNT];
		operator("pb", data);
		if (data->b->content > pivot[SMALL])
		{
			if (*size > 0 && data->a->content > pivot[BIG])
			{
				--(*size);
				++count[RA_CNT];
				operator("rr", data);
			}
			else
				operator("rb", data);
			++count[RB_CNT];
		}
	}
}

static void	switch_sort(t_push_swap *data, int size)
{
	if (size == 3)
		return (sort_three_a(data));
	else if (size == 2 && data->a->content > data->a->next->content)
		return (operator("sa", data));
}

void	sort_a(t_push_swap *data, int size)
{
	int	count[3];
	int	pivot[2];

	if (size <= 3)
		return (switch_sort(data, size));
	if (is_sort(data->a, ASC, size))
		return ;
	ft_memset(&count, 0, sizeof(count));
	get_pivot(pivot, data->a, size);
	while (size-- > 0)
		move_stack(data, pivot, count, &size);
	call_next_sort(data, count);
}
