/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infinity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:35:11 by kzak              #+#    #+#             */
/*   Updated: 2022/06/24 15:36:09 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	special_case(t_stack *stack)
{
	int		min;
	int		c;
	size_t	i;

	c = 0;
	i = stack->la;
	while (i != 5)
	{
		min = find_min(stack);
		find_position(stack, min);
		pb(stack);
		c++;
		i--;
	}
	tencase(stack);
	while (c != 0)
	{
		pa(stack);
		c--;
	}
}

void	hundred_case(t_stack *stack)
{
	int	pivot[3];

	find_pivot(stack, pivot, 1);
	push_to_b(stack, pivot, 3);
	special_case(stack);
	sort_b(stack);
}

void	infinity(t_stack *stack)
{
	int	pivot[7];

	find_pivot(stack, pivot, 0);
	push_to_b(stack, pivot, 7);
	special_case(stack);
	sort_b(stack);
}
