/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:37:37 by kzak              #+#    #+#             */
/*   Updated: 2022/06/20 14:25:09 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_position(t_stack *stack, int min)
{
	size_t	i;

	i = 0;
	while (i <= stack->la)
	{
		if (stack->a[i] == min)
		{
			if (i > (stack->la / 2))
			{
				while (stack->a[0] != min)
					rra(stack);
			}
			else
			{
				while (stack->a[0] != min)
					ra(stack);
			}
		}
		i++;
	}
}

void	tencase(t_stack *stack)
{
	int		min;
	size_t	i;

	i = stack->la;
	while (i != 3)
	{
		min = find_min(stack);
		find_position(stack, min);
		pb(stack);
		i--;
	}
	threecase(stack);
	i = stack->lb;
	while (i != 0)
	{
		pa(stack);
		i--;
	}
}
