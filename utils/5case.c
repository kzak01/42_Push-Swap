/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5case.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-masc <ldi-masc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:03:35 by kzak              #+#    #+#             */
/*   Updated: 2022/06/10 15:01:14 by ldi-masc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(t_stack *stack)
{
	size_t	i;
	int		t;

	i = 1;
	t = stack->a[0];
	while (i < stack->la)
	{
		if (stack->a[i] > t)
			t = stack->a[i];
		i++;
	}
	return (t);
}

int	find_minb(t_stack *stack)
{
	size_t	i;
	int		t;

	i = 1;
	t = stack->b[0];
	while (i < stack->lb)
	{
		if (stack->b[i] < t)
			t = stack->b[i];
		i++;
	}
	return (t);
}

int	find_min(t_stack *stack)
{
	size_t	i;
	int		t;

	i = 1;
	t = stack->a[0];
	while (i < stack->la)
	{
		if (stack->a[i] < t)
			t = stack->a[i];
		i++;
	}
	return (t);
}

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

void	fivecase(t_stack *stack)
{
	int	max;
	int	min;
	if(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2] && stack->a[2] < stack->a[3] && stack->a[3] < stack->a[4] && stack->a[4] > stack->a[0])
	{
		exit(0);
	}
	max = find_max(stack);
	min = find_min(stack);
	if (stack->la == 4)
	{
		fourcase(stack, min);
		exit(0);
	}
	sort_min(stack, min);
	sort_max(stack, max);
	sort(stack);
	pa(stack);
	ra(stack);
	pa(stack);
	// printf("%d %d %d %d %d\n", stack->a[0], stack->a[1],
	// 	stack->a[2], stack->a[3], stack->a[4]);
}

void	fourcase(t_stack *stack, int min)
{
	if(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2] && stack->a[2] < stack->a[3] && stack->a[3] > stack->a[0])
	{
		exit(0);
	}
	if (min == stack->a[0])
		pb (stack);
	else if (min == stack->a[1])
	{
		sa(stack);
		pb (stack);
	}
	else if (min == stack->a[2])
	{
		rra(stack);
		rra(stack);
		pb (stack);
	}
	else if (min == stack->a[3])
	{
		rra(stack);
		pb (stack);
	}
	sort(stack);
	pa(stack);
}