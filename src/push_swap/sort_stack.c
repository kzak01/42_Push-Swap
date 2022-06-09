/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:46:26 by kzak              #+#    #+#             */
/*   Updated: 2022/06/08 13:01:58 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	moves(t_push_swap *stack, int *pivot, int *n, int *temp)
{
	// int	*m;

	// m = n;
	if (stack->a->content > pivot[1])
	{
		++temp[0];
		ra(stack);
		// ++temp[0];
	}
	else
	{
		++temp[1];
		pb(stack);
		// ++temp[1];
		if (stack->b->content > pivot[0])
		{
			if (*n > 0 && stack->a->content > pivot[1])
			{
				--(*n);
				++temp[0];
				rr(stack);
				// ++temp[0];
				// n--;
			}
			else
				rb(stack);
			++temp[2];
		}
	}
}

void	sort_stack(t_push_swap *stack, int n)
{
	int	pivot[2];
	int	temp[3];

	if (n <= 3)
		return (sort_small(stack, n, STACK_A));
	if (is_sort(stack->a, STACK_A, n))
		return ;
	ft_memset(&temp, 0, sizeof(temp));
	find_pivot(pivot, stack->a, n);
	// n--;
	while (--n > 0)
	{
		moves(stack, pivot, &n, temp);
		// n--;
	}
	recursive_call(stack, temp, STACK_A);
}
