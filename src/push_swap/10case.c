/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:37:37 by kzak              #+#    #+#             */
/*   Updated: 2022/06/21 13:34:57 by kzak             ###   ########.fr       */
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
	int		c;
	size_t	i;

	c = 0;
	i = stack->la;
	while (i != 3)
	{
		min = find_min(stack);
		find_position(stack, min);
		pb(stack);
		c++;
		i--;
	}
	threecase(stack);
	while (c != 0)
	{
		pa(stack);
		c--;
	}
}
