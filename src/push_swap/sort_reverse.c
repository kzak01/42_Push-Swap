/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:46:20 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 12:49:07 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	moves(t_counter *count, t_push_swap *stack)
{
	if (stack->b->content < count->medium_pivot)
	{
		rb(stack);
		count->rb++;
	}
	else
	{
		pa(stack);
		count->pa++;
		if (stack->a->content < count->m_medium_pivot)
		{
			ra(stack);
			count->ra++;
		}
	}
}

void	do_pa(t_push_swap *stack, int n)
{
	while (n--)
	{
		pa(stack);
	}
}

void	sort_reverse(t_push_swap *stack, int n)
{
	t_counter	count;


	ft_memset(&count, 0, sizeof(count));
	if (is_sort(stack->b, STACK_B, n))
		return (do_pa(stack, n));
	if (n <= 3)
		return (sort_small(stack, n, STACK_B));
	find_pivot(&count, stack->b, n);
	while (n-- > 0)
		moves(&count, stack);
	recursive_call(stack, &count, STACK_B);
}
