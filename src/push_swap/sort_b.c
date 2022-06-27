/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 09:49:02 by kzak              #+#    #+#             */
/*   Updated: 2022/06/27 10:02:19 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_maxb(t_stack *stack)
{
	int	i;
	int	t;

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

static void	find_positionb(t_stack *stack, int max)
{
	int	i;

	i = 0;
	while (i <= stack->lb)
	{
		if (stack->b[i] == max)
		{
			if (i > (stack->lb / 2))
			{
				while (stack->b[0] != max)
					rrb(stack);
			}
			else
			{
				while (stack->b[0] != max)
					rb(stack);
			}
		}
		i++;
	}
}

static void	find_pos(t_stack *stack, int max)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i <= stack->lb)
	{
		if (stack->b[i] == max)
		{
			if (i == 1)
			{
				sb(stack);
				pa(stack);
			}
			else
			{
				while (stack->b[0] != max)
					find_positionb(stack, max);
				pa(stack);
			}
		}
		i++;
	}
}

void	sort_b(t_stack *stack)
{
	int	max;
	int	i;

	while (stack->lb != 0)
	{
		i = stack->lb;
		while (i != 0)
		{
			max = find_maxb(stack);
			find_pos(stack, max);
			i--;
		}
	}
}
