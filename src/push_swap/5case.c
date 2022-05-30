/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:03:35 by kzak              #+#    #+#             */
/*   Updated: 2022/05/30 11:48:03 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack *stack, int n)
{
	int		iter;
	int		cur_max;

	iter = 0;
	cur_max = stack->content;
	while (iter < n)
	{
		if (stack->content > cur_max)
			cur_max = stack->content;
		iter++;
		stack = stack->next;
	}
	return (cur_max);
}

int	find_min(t_stack *stack, int n)
{
	int		iter;
	int		cur_min;

	iter = 0;
	cur_min = stack->content;
	while (iter < n)
	{
		if (stack->content < cur_min)
			cur_min = stack->content;
		iter++;
		stack = stack->next;
	}
	return (cur_min);
}

void	fivecase(t_push_swap *stack, int n)
{
	int	max;
	int	min;

	max = find_max(stack->a, n);
	min = find_min(stack->a, n);
	sort_min(stack, min);
	sort_max(stack, max);
	sort(stack);
	operator("pa", stack);
	operator("ra", stack);
	operator("pa", stack);
}
