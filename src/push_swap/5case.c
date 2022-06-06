/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:42:20 by kzak              #+#    #+#             */
/*   Updated: 2022/06/06 11:49:27 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_max(t_push_swap *stack, int max)
{
	if (max == stack->a->content)
		pb(stack);
	else if (max == stack->a->next->content)
	{
		sa(stack);
		pb(stack);
	}
	else if (max == stack->a->next->next->content)
	{
		rra(stack);
		rra(stack);
		pb(stack);
	}
	else if (max == stack->a->next->next->next->content)
	{
		rra(stack);
		pb(stack);
	}
}

static void	sort_min(t_push_swap *stack, int min)
{
	if (min == stack->a->content)
		pb(stack);
	else if (min == stack->a->next->content)
	{
		sa(stack);
		pb(stack);
	}
	else if (min == stack->a->next->next->content)
	{
		rra(stack);
		rra(stack);
		rra(stack);
		pb(stack);
	}
	else if (min == stack->a->next->next->next->content)
	{
		rra(stack);
		rra(stack);
		pb(stack);
	}
	else if (min == stack->a->next->next->next->next->content)
	{
		rra(stack);
		pb(stack);
	}
}

static int	find_max(t_stack *stack, int n)
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

static int	find_min(t_stack *stack, int n)
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
	// printf("min,%d  max,%d", min, max);
	sort_min(stack, min);
	sort_max(stack, max);
	sort(stack);
	pa(stack);
	ra(stack);
	pa(stack);
}
