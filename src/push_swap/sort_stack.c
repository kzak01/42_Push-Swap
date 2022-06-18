/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:46:26 by kzak              #+#    #+#             */
/*   Updated: 2022/06/18 12:40:19 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	moves(t_push_swap *stack, t_counter *count, int *n)
{
	if (stack->a->content > count->m_medium_pivot)
	{
		ra(stack);
		count->ra++;
	}
	else
	{
		pb(stack);
		count->pa++;
		if (stack->b->content > count->medium_pivot)
		{
			if (*n > 0 && stack->a->content > count->m_medium_pivot)
			{
				--(*n);
				rr(stack);
				count->ra++;
			}
			else
				rb(stack);
			count->rb++;
		}
	}
}

void	sort_stack(t_push_swap *stack, int n)
{
	t_counter	count;

	ft_memset(&count, 0, sizeof(count));
	if (is_sort(stack->a, STACK_A, n))
		return ;
	if (n <= 3)
		return (sort_small(stack, n, STACK_A));
	find_pivot(&count, stack->a, n);
	while (n-- > 0)
		moves(stack, &count, &n);
	recursive_call(stack, &count, STACK_A);
}
