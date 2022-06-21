/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:49:02 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 12:58:03 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_maxb(t_stack *stack)
{
	size_t	i;
	int		t;

	i = 1;
	t = stack->b[0];
	while (i < stack->lb)
	{
		if (stack->b[i] > t)
			t = stack->b[i];
		i++;
	}
	return (t);
}

void	find_pos(t_stack *stack, int max)
{
	size_t	i;
	int		c;

	i = 0;
	c = 0;
	while (i <= stack->lb)
	{
		if (stack->b[i] == max)
		{
			if (i == 1)
			{
				sb(stack);
			}
			else
			{
				while (stack->b[0] != max)
				{
					rb(stack);
					c++;
				}
			}
		}
		i++;
	}
	pa(stack);
	while (c != 0)
	{
		rrb(stack);
		c--;
	}
}

void	sort_b(t_stack *stack)
{
	int		max;
	size_t	i;

	while (stack->lb != 0)
	{
		i = stack->lb;
		while (i != 0)
		{
			max = find_maxb(stack);
			find_pos(stack, max);
			// pa(stack);
			i--;
		}
	}
}
