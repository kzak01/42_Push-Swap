/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:46:20 by kzak              #+#    #+#             */
/*   Updated: 2022/06/08 13:01:29 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	moves(int *pivot, t_push_swap *stack, int *temp)
{
	if (stack->b->content < pivot[0])
	{
		++temp[2];
		rb(stack);
		// ++temp[2];
	}
	else
	{
		++temp[1];
		pa(stack);
		// ++temp[1];
		if (stack->a->content < pivot[1])
		{
			++temp[0];
			ra(stack);
			// ++temp[0];
		}
	}
}

void	do_pa(t_push_swap *stack, int n)
{
	// n--;
	while (--n)
	{
		pa(stack);
		// n--;
	}
}

void	sort_reverse(t_push_swap *stack, int n)
{
	int	pivot[2];
	int	temp[3];

	if (n <= 3)
		return (sort_small(stack, n, STACK_B));
	if (is_sort(stack->b, STACK_B, n))
		return (do_pa(stack, n));
	ft_memset(&temp, 0, sizeof(temp));
	find_pivot(pivot, stack->b, n);
	// n--;
	while (--n > 0)
	{
		moves(pivot, stack, temp);
		// n--;
	}
	recursive_call(stack, temp, STACK_B);
}
